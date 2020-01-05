/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:52:15 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/21 15:39:31 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(const void *src, size_t size)
{
	void *ret;

	if (!(src))
		return (0);
	if (!(ret = (void *)ft_memalloc(size)))
		return (0);
	ft_memcpy(ret, src, size);
	return (ret);
}
