/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:13:53 by aadlercr          #+#    #+#             */
/*   Updated: 2019/11/02 15:45:30 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;

	new = (char *)malloc(size + 1);
	if (!new)
		return (NULL);
	ft_memset(new, '\0', size + 1);
	return (new);
}
