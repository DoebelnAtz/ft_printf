/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 11:58:07 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/18 16:20:24 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	unsigned int index;

	index = 0;
	if (len != 0)
	{
		while (index < len && src[index])
		{
			dest[index] = src[index];
			index++;
		}
		while (len - index > 0)
		{
			dest[index] = 0;
			index++;
		}
	}
	return (dest);
}
