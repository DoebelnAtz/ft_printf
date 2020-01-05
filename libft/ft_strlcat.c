/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 19:58:01 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/18 12:24:50 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	lendest;
	unsigned int	counter;
	unsigned int	lensrc;

	counter = 0;
	lendest = 0;
	lensrc = 0;
	while (dst[lendest] != '\0')
		lendest++;
	while (src[lensrc] != '\0')
		lensrc++;
	if (lendest > dstsize)
		return (dstsize + lensrc);
	while (*src != '\0' && (lendest + counter + 1) < dstsize)
	{
		dst[lendest + counter] = *src;
		counter++;
		src++;
	}
	dst[lendest + counter] = '\0';
	return (lendest + lensrc);
}
