/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 10:52:33 by aadlercr          #+#    #+#             */
/*   Updated: 2019/11/14 15:13:31 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		find_index(const char *str, char c)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (i);
	return (-1);
}

int		nbrlen(t_long2 n)
{
	int base;
	int len;
	int	sign;

	sign = (n < 0) ? -1 : 1;
	base = 10;
	len = 0;
	while (n)
	{
		n /= base;
		len++;
	}
	return (len);
}

void	ft_putwchar_pf(t_printf *p, wchar_t wc)
{
	char			buf[4];
	unsigned int	bytes;

	bytes = ft_wcharlen(wc);
	if (bytes == 1)
		buf[0] = wc;
	else
	{
		if (bytes == 2)
			buf[0] = ((wc & (0x1f << 6)) >> 6) | 0xC0;
		else
		{
			if (bytes == 3)
				buf[0] = ((wc >> 12) & 0xf) | 0xE0;
			else
			{
				buf[0] = ((wc >> 18) & 7) | 0xF0;
				buf[1] = ((wc >> 12) & 0x3f) | 0x80;
			}
			buf[bytes - 2] = ((wc >> 6) & 0x3f) | 0x80;
		}
		buf[bytes - 1] = (wc & 0x3f) | 0x80;
	}
	buffer(p, buf, bytes);
}

void	value_modifier(int *num1, int *num2, int i)
{
	if (i)
	{
		(*num1)++;
		(*num2)++;
	}
	else
	{
		(*num1)--;
		(*num2)--;
	}
}

void	fill_base_pf(t_printf *p, int *index, char **arr)
{
	p->padding -= (p->f & HASH) ? MIN(find_index(".o.Xxp", *p->format), 2) : 0;
	((p->f & PRECISION) && p->f & HASH && *p->format == 'o') ?
	p->precision-- : 0;
	if (p->f & PRECISION)
		while (p->precision-- > 0)
		{
			(*arr)[(*index)--] = '0';
			p->padding--;
		}
	else if (p->f & ZERO)
		while (p->padding-- > 0)
			(*arr)[(*index)--] = '0';
	if (p->f & HASH)
	{
		(find_index(".oXxp", *p->format) > 2) ? (*arr)[(*index)--] = 'x' : 0;
		(*p->format == 'X') ? (*arr)[(*index)--] = 'X' : 0;
		(*arr)[(*index)--] = '0';
	}
}
