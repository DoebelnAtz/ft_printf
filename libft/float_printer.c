/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_printer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 14:09:07 by aadlercr          #+#    #+#             */
/*   Updated: 2019/11/14 15:14:12 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long long	pow(long i)
{
	unsigned long long number;

	number = 1;
	while (--i > 0)
		number *= 10;
	return (number);
}

static void					fill_double(long double n, t_printf *p,
							char **arr, int *index)
{
	unsigned long long	value;
	unsigned long long	dec;
	unsigned long long	power;

	value = (unsigned long long)n;
	power = pow(nbrlen(value));
	dec = (n - value) * pow(p->precision + 2);
	while (value > 0 || power > 0)
	{
		(*arr)[(*index)++] = (power > value) ? '0' : (value / power) + '0';
		value %= power;
		power /= 10;
	}
	power = pow(nbrlen(dec));
	((p->precision > 0) || p->f & HASH) ? (*arr)[(*index)++] = '.' : 0;
	dec = ((dec % power) % 10 >= 5) ? dec / 10 + 1 : dec / 10;
	(power > dec) ? power /= 10 : 0;
	while (dec && p->precision--)
	{
		(*arr)[(*index)++] = (power > dec) ? '0' : (dec / power) + '0';
		dec %= power;
		power /= 10;
	}
	while (p->precision--)
		(*arr)[(*index)++] = '0';
}

static char					*ldtoa_pf(long double n, t_printf *p)
{
	char	*arr;
	int		index;

	index = 0;
	arr = ft_strnew(21 + p->precision);
	if (n < 0)
	{
		n *= -1;
		arr[index++] = '-';
	}
	else
	{
		if (p->f & SPACE || p->f & PLUS)
			arr[index++] = (p->f & SPACE) ? ' ' : '+';
	}
	fill_double(n, p, &arr, &index);
	arr = (char *)ft_realloc(arr, index + 1);
	return (arr);
}

void						print_float(long double n, t_printf *p)
{
	char	*arr;
	int		len;

	p->precision = (!(p->f & PRECISION)) ? 6 : p->precision;
	arr = ldtoa_pf(n, p);
	len = ft_strlen(arr);
	p->padding -= len;
	print_padding(p, 1);
	buffer(p, arr, len);
	print_padding(p, 0);
	free(arr);
}
