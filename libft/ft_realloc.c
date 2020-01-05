/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:39:20 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/17 14:21:04 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	char			*newptr;
	char			*src;

	src = ptr;
	if (!src)
	{
		if (!(newptr = malloc(size + 1)))
			return (0);
		return (newptr);
	}
	else
	{
		if (!(newptr = malloc(size + 1)))
			return (0);
		newptr = ft_memcpy(newptr, src, size);
		free(ptr);
		return (newptr);
	}
}
