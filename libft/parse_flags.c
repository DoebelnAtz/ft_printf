/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 10:45:28 by aadlercr          #+#    #+#             */
/*   Updated: 2019/11/14 15:13:09 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	parse_flags(t_printf *p)
{
	while ((p->i = find_index("#+ -0|*", *p->format)) > -1 && p->format++)
		p->f |= (1 << p->i);
	if (p->f & WILDCARD)
	{
		p->padding = MAX((int)va_arg(p->ap, int), 0);
		while (ft_isdigit(*p->format))
			p->format++;
	}
	p->f &= (p->f & MINUS) ? ~ZERO : ~0;
	p->f &= (p->f & PLUS) ? ~SPACE : ~0;
}

void	parse_padding(t_printf *p)
{
	if (!(p->f & WILDCARD))
	{
		p->padding = MAX(ft_atoi(p->format), 0);
		while (ft_isdigit(*p->format))
			p->format++;
	}
}

void	parse_conversions(t_printf *p)
{
	if (*p->format == 'h' && p->format++)
		p->f |= (*p->format == 'h') ? SHORT2 : SHORT;
	else if (*p->format == 'l' && p->format++)
		p->f |= (*p->format == 'l') ? LONG2 : LONG;
	else if (*p->format == 'L')
		p->f |= DOUBLE;
	while (find_index("hljz", *p->format) != -1)
		p->format++;
}

void	parse_precision(t_printf *p)
{
	p->f |= (*p->format == '.') ? PRECISION : 0;
	if (p->f & PRECISION && ++p->format)
	{
		if (*p->format == '*' && ++p->format)
			p->precision = MAX((int)va_arg(p->ap, int), 0);
		else
		{
			p->precision = MAX(ft_atoi(p->format), 0);
			while (ft_isdigit(*p->format) || find_index("-+", *p->format) > -1)
				p->format++;
		}
	}
}

void	parse_format(t_printf *p)
{
	char c;

	c = *p->format;
	if (c == 's')
		parse_string(p);
	else if (find_index("di", c) != -1)
		parse_digit(p);
	else if (c == 'x')
		parse_base(p);
	else if (c == 'X')
		parse_base(p);
	else if (c == 'u')
		parse_base(p);
	else if (c == 'o')
		parse_base(p);
	else if (c == 'f')
		parse_double(p);
	else if (c == 'c')
		parse_char(p);
	else if (c == 'p')
		parse_pointer(p);
	else
		parse_char(p);
}
