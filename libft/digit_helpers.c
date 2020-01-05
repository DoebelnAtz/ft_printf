/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit_helpers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 10:51:54 by aadlercr          #+#    #+#             */
/*   Updated: 2019/11/14 15:14:15 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	parse_digit(t_printf *p)
{
	t_long2 num;

	if ((p->f & LONG) || (p->f & LONG2))
		num = (p->f & LONG2) ? (t_long2)va_arg(p->ap, long long int)
		: (t_long2)va_arg(p->ap, long int);
	else if ((p->f & SHORT) || (p->f & SHORT2))
		num = (p->f & SHORT2) ? (t_long2)((char)va_arg(p->ap, int)) :
		(t_long2)((short int)va_arg(p->ap, int));
	else
		num = (t_long2)va_arg(p->ap, int);
	print_digit_pf(p, num);
}

void	print_base(t_printf *p, t_ulong2 num)
{
	char	c;

	c = *p->format;
	if (c == 'x')
		ft_itoa_base_pf(p, "0123456789abcdef", num);
	else if (c == 'X')
		ft_itoa_base_pf(p, "0123456789ABCDEF", num);
	else if (c == 'o')
		ft_itoa_base_pf(p, "01234567", num);
	else if (c == 'u')
		ft_itoa_base_pf(p, "0123456789", num);
}

void	parse_double(t_printf *p)
{
	long double num;

	if ((p->f & DOUBLE))
		num = (long double)va_arg(p->ap, long double);
	else
		num = (long double)va_arg(p->ap, double);
	print_float(num, p);
}

void	parse_base(t_printf *p)
{
	t_ulong2 num;

	if ((p->f & LONG) || (p->f & LONG2))
		num = (p->f & LONG2) ? (t_ulong2)va_arg(p->ap, t_ulong2)
		: (t_ulong2)va_arg(p->ap, unsigned long);
	else if ((p->f & SHORT) || (p->f & SHORT2))
		num = (p->f & SHORT2) ? (t_ulong2)((unsigned char)va_arg(p->ap, int)) :
		(t_ulong2)((unsigned short)va_arg(p->ap, int));
	else
		num = (t_ulong2)va_arg(p->ap, unsigned int);
	if (!num && p->f & HASH && *p->format != 'o')
		p->f ^= HASH;
	print_base(p, num);
}
