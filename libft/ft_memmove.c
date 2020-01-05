/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:06:29 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/18 19:25:44 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	if (!len || src == dst)
		return (dst);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		s += (len - 1);
		d += (len - 1);
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}
