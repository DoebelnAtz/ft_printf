/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:43:48 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/18 19:26:31 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c,
size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	while (n--)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
		{
			return (dst + i + 1);
		}
		i++;
	}
	return (0);
}
