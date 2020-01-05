/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 15:29:13 by aadlercr          #+#    #+#             */
/*   Updated: 2019/11/14 15:13:47 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	parse_options(t_printf *p)
{
	p->f = 0;
	p->c = 0;
	p->padding = 0;
	p->precision = 0;
	p->i = 0;
	parse_flags(p);
	parse_padding(p);
	parse_precision(p);
	parse_conversions(p);
	parse_format(p);
}

void		parse_pointer(t_printf *p)
{
	void *ptr;

	ptr = (void *)va_arg(p->ap, void *);
	p->f |= HASH;
	p->f |= POINTER;
	(p->f & PRECISION) ? p->f ^= POINTER : 0;
	ft_itoa_base_pf(p, "0123456789abcdef", (t_ulong2)ptr);
}

int			ft_printf(const char *format, ...)
{
	t_printf p;

	ft_bzero(&p, sizeof(p));
	va_start(p.ap, format);
	p.format = (char *)format;
	p.fd = 1;
	while (*p.format)
	{
		if (*p.format == '%')
		{
			++p.format;
			if (!*p.format)
				break ;
			parse_options(&p);
		}
		else if (*p.format == '~' && ++p.format)
			parse_color(&p);
		else
			buffer(&p, p.format, 1);
		p.format++;
	}
	if (write(p.fd, p.buf, p.buf_i) == -1)
		return (-1);
	va_end(p.ap);
	return (p.printed);
}

int			ft_printf_fd(int fd, const char *format, ...)
{
	t_printf p;

	ft_bzero(&p, sizeof(p));
	va_start(p.ap, format);
	p.format = (char *)format;
	p.fd = fd;
	while (*p.format)
	{
		if (*p.format == '%')
		{
			++p.format;
			if (!*p.format)
				break ;
			parse_options(&p);
		}
		else if (*p.format == '~' && ++p.format)
			parse_color(&p);
		else
			buffer(&p, p.format, 1);
		p.format++;
	}
	if (write(p.fd, p.buf, p.buf_i) == -1)
		return (-1);
	va_end(p.ap);
	return (p.printed);
}

void		buffer(t_printf *p, void *arr, unsigned int size)
{
	int diff;
	int arri;

	arri = 0;
	while (BUFF_SIZE - p->buf_i < size)
	{
		diff = (BUFF_SIZE - p->buf_i);
		ft_memcpy(&p->buf[p->buf_i], &arr[arri], diff);
		p->printed += diff;
		arri += diff;
		size -= diff;
		p->buf_i += diff;
		write(p->fd, p->buf, p->buf_i);
		p->buf_i = 0;
	}
	ft_memcpy(&p->buf[p->buf_i], &arr[arri], size);
	p->printed += size;
	p->buf_i += size;
}
