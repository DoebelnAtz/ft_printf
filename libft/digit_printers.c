/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit_printers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 10:55:38 by aadlercr          #+#    #+#             */
/*   Updated: 2019/11/14 15:14:12 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*print_bases(t_printf *p, char *base, t_ulong2 nb)
{
	char	*arr;
	int		index;
	int		lenbase;
	char	*temp;

	arr = ft_strnew(21 + p->precision);
	index = 20 + p->precision;
	lenbase = ft_strlen(base);
	if (!nb && (p->f & POINTER || !((p->f & PRECISION) || (p->precision > 0))))
	{
		arr[index--] = '0';
		value_modifier(&p->precision, &p->padding, 0);
	}
	while (nb != 0)
	{
		arr[index--] = base[nb % lenbase];
		nb /= lenbase;
		value_modifier(&p->precision, &p->padding, 0);
	}
	fill_base_pf(p, &index, &arr);
	temp = arr;
	if (!(arr = strdup(&arr[index + 1])))
		exit(-1);
	free(temp);
	return (arr);
}

void		ft_itoa_base_pf(t_printf *p, char *base, t_ulong2 n)
{
	char	*arr;
	char	*tmp;

	(!n && *p->format == 'o' && p->f & HASH && !(p->f & PRECISION))
	? p->f ^= HASH : 0;
	arr = print_bases(p, base, n);
	tmp = arr;
	if ((p->f & ZERO) && (p->f & PRECISION) && !(p->f & POINTER))
		p->f ^= ZERO;
	print_padding(p, 1);
	buffer(p, arr, ft_strlen(arr));
	print_padding(p, 0);
	free(arr);
}

static void	fill_digit(t_printf *p, t_ulong2 n, int *index, char **arr)
{
	if (!n && (!(p->f & PRECISION) || (p->precision > 0)))
	{
		(*arr)[(*index)--] = '0';
		p->precision--;
	}
	while (n != 0)
	{
		(*arr)[(*index)--] = (n % 10) + '0';
		n /= 10;
		p->precision--;
	}
}

char		*itoa_digit_pf(t_printf *p, t_long2 n)
{
	char		*arr;
	int			index;
	int			sign;
	char		*temp;

	sign = 0;
	if (n < 0 && ++sign)
		n = (n < 0) ? (t_ulong2)(n * -1) : n;
	index = 20 + p->precision;
	if (!(arr = ft_strnew(21 + p->precision)))
		exit(-1);
	fill_digit(p, (t_ulong2)n, &index, &arr);
	while (p->precision-- > 0)
		arr[index--] = '0';
	if (sign && !(p->f & ZERO))
		arr[index--] = '-';
	else
		(p->f & PLUS && !(p->f & ZERO)) ? arr[index--] = '+' : 0;
	if ((p->f & SPACE) && !(p->f & PLUS) && !sign && !(p->f & ZERO))
		arr[index--] = ' ';
	temp = arr;
	arr = strdup(&arr[index + 1]);
	free(temp);
	return (arr);
}

void		print_digit_pf(t_printf *p, t_long2 n)
{
	char	*arr;
	int		len;

	if ((p->f & ZERO) && (p->f & PRECISION))
		p->f ^= ZERO;
	if (p->f & ZERO && ((p->f & SPACE) || (p->f & PLUS && n >= 0) || n < 0))
	{
		(p->f & SPACE) ? buffer(p, " ", 1) : 0;
		(n < 0) ? buffer(p, "-", 1) : 0;
		(p->f & PLUS && n >= 0) ? buffer(p, "+", 1) : 0;
		p->padding--;
	}
	if (!(arr = itoa_digit_pf(p, n)))
		exit(-1);
	len = ft_strlen(arr);
	p->padding -= len;
	print_padding(p, 1);
	buffer(p, arr, len);
	print_padding(p, 0);
	free(arr);
}
