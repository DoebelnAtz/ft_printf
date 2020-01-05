/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 11:59:45 by aadlercr          #+#    #+#             */
/*   Updated: 2019/11/14 15:13:21 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_padding(t_printf *p, int n)
{
	int pad;

	pad = p->padding;
	p->c = (p->f & ZERO) ? '0' : ' ';
	if (n && (p->f & CENTER))
	{
		while (p->padding > (pad / 2))
		{
			buffer(p, &p->c, 1);
			p->padding--;
		}
		(!(p->f & MINUS)) ? p->f ^= MINUS : 0;
	}
	else
	{
		while (!(p->f & MINUS) && n && p->padding-- > 0)
		{
			buffer(p, &p->c, 1);
		}
		while ((p->f & MINUS) && !n && p->padding-- > 0)
		{
			buffer(p, &p->c, 1);
		}
	}
}

void	parse_wstring(t_printf *p)
{
	wchar_t		*str;
	int			len;
	int			i;

	i = 0;
	str = (wchar_t *)va_arg(p->ap, wchar_t *);
	len = (p->f & PRECISION) ? p->precision : ft_wstrlen(str);
	p->padding -= len;
	print_padding(p, 1);
	while (str[i] != L'\0' && len-- > 0)
	{
		ft_putwchar_pf(p, str[i++]);
	}
	print_padding(p, 0);
}

void	parse_string(t_printf *p)
{
	char	*str;
	int		len;
	char	*arr;

	if (p->f & LONG)
		parse_wstring(p);
	else
	{
		str = va_arg(p->ap, char *);
		if (!str)
			len = (p->f & PRECISION && (p->precision < 6)) ? p->precision : 6;
		else
			len = (p->f & PRECISION && p->precision < (int)ft_strlen(str))
			? p->precision : ft_strlen(str);
		if ((arr = ft_strnew(len)))
		{
			arr = (str) ? ft_strncpy(arr, str, len) :
			ft_strncpy(arr, "(null)", len);
			p->padding -= ft_strlen(arr);
			print_padding(p, 1);
			buffer(p, arr, len);
			print_padding(p, 0);
			free(arr);
		}
	}
}

void	parse_char(t_printf *p)
{
	wint_t c;

	if (p->f & LONG)
	{
		c = (wint_t)va_arg(p->ap, wint_t);
		p->padding--;
		print_padding(p, 1);
		ft_putwchar_pf(p, c);
		print_padding(p, 0);
	}
	else
	{
		if (*p->format != 'c')
			c = *p->format;
		else
			c = (wint_t)va_arg(p->ap, int);
		p->padding--;
		print_padding(p, 1);
		buffer(p, &c, 1);
		print_padding(p, 0);
	}
}
