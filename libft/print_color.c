/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_color.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:41:44 by aadlercr          #+#    #+#             */
/*   Updated: 2019/11/14 15:13:25 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		create_rgb(t_printf *p)
{
	char *res;

	if (!(res = ft_strnew(22)))
		exit(-1);
	if (p->f & BOLD)
		res = ft_strcat(res, "\e[1;38;2;");
	else
		res = ft_strcat(res, "\e[38;2;");
	res = ft_strncat(res, p->format, nbrlen(MAX(ft_atoi(p->format), 0)) + 1);
	while (ft_isdigit(*p->format))
		p->format++;
	res = ft_strncat(res, ++p->format, nbrlen(MAX(ft_atoi(p->format), 0)) + 1);
	while (ft_isdigit(*p->format))
		p->format++;
	res = ft_strncat(res, ++p->format, nbrlen(MAX(ft_atoi(p->format), 0)));
	while (ft_isdigit(*p->format))
		p->format++;
	res = ft_strcat(res, "m");
	buffer(p, res, (int)ft_strlen(res));
	p->printed -= (int)ft_strlen(res);
	free(res);
}

static void		create_rgb_bg(t_printf *p)
{
	char *res;

	if (!(res = ft_strnew(22)))
		exit(-1);
	res = ft_strcat(res, "\e[48;2;");
	res = ft_strncat(res, p->format, nbrlen(MAX(ft_atoi(p->format), 0)) + 1);
	while (ft_isdigit(*p->format))
		p->format++;
	res = ft_strncat(res, ++p->format, nbrlen(MAX(ft_atoi(p->format), 0)) + 1);
	while (ft_isdigit(*p->format))
		p->format++;
	res = ft_strncat(res, ++p->format, nbrlen(MAX(ft_atoi(p->format), 0)));
	while (ft_isdigit(*p->format))
		p->format++;
	res = ft_strcat(res, "m");
	buffer(p, res, (int)ft_strlen(res));
	p->printed -= (int)ft_strlen(res);
	free(res);
}

static void		create_color(t_printf *p)
{
	char *color;

	if (!(color = ft_strnew(21)))
		exit(-1);
	color = ft_strcat(color, "\e[");
	if (p->f & FOREGROUND)
	{
		color = ft_strcat(color, "38;5;");
		color = ft_strcat(color, ft_itoa(p->color));
	}
	if (p->f & BACKGROUND)
	{
		if (p->f & FOREGROUND)
			color = ft_strcat(color, ";");
		color = ft_strjoin("\e[48;5;", color);
		color = ft_strcat(color, ft_itoa(p->bg));
	}
	buffer(p, color, (int)ft_strlen(color));
	p->printed -= (int)ft_strlen(color);
	free(color);
	color = ft_strcat(color, "m");
}

static void		print_color(t_printf *p)
{
	if (find_index("rgybmc", *p->format) != -1)
	{
		if (*p->format == 'r')
			(p->f & BOLD) ? buffer(p, REDB, 7) : buffer(p, RED, 7);
		else if (*p->format == 'g')
			(p->f & BOLD) ? buffer(p, GREENB, 7) : buffer(p, GREEN, 7);
		else if (*p->format == 'y')
			(p->f & BOLD) ? buffer(p, YELLOWB, 7) : buffer(p, YELLOW, 7);
		else if (*p->format == 'b')
			(p->f & BOLD) ? buffer(p, BLUEB, 7) : buffer(p, BLUE, 7);
		else if (*p->format == 'm')
			(p->f & BOLD) ? buffer(p, MAGENTAB, 7) : buffer(p, MAGENTA, 7);
		else if (*p->format == 'c')
			(p->f & BOLD) ? buffer(p, CYANB, 7) : buffer(p, CYAN, 7);
		p->printed -= 7;
	}
	else if (*p->format == '-' || *p->format == '~')
	{
		p->printed -= (*p->format == '-') ? 4 : 1;
		(*p->format == '-') ? buffer(p, RESET, 4) : buffer(p, "~", 1);
	}
	else if (*p->format == 'n')
		create_color(p);
}

void			parse_color(t_printf *p)
{
	p->f = 0;
	if (*p->format == '*' && p->format++)
		p->f |= BOLD;
	if (*p->format == '#' && p->format++)
	{
		p->f |= FOREGROUND;
		p->color = MAX(ft_atoi(p->format), 0);
		while (ft_isdigit(*p->format))
			p->format++;
	}
	else if (*p->format == '&' && p->format++)
		create_rgb(p);
	if (*p->format == '.' && p->format++)
	{
		p->f |= BACKGROUND;
		p->bg = MAX(ft_atoi(p->format), 0);
		while (ft_isdigit(*p->format))
			p->format++;
	}
	else if (*p->format == '@' && p->format++)
		create_rgb_bg(p);
	print_color(p);
}
