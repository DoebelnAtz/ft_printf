/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_uc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 11:36:36 by aadlercr          #+#    #+#             */
/*   Updated: 2019/11/04 12:40:53 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putwchar(wchar_t wc)
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
	write(1, buf, bytes);
}
