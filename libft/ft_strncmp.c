/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 16:03:01 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/18 19:44:45 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	index;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	index = 0;
	if (!n)
		return (0);
	while (*str1 == *str2 && *str1 != '\0' && *str2 != '\0' && index < n - 1)
	{
		str1++;
		str2++;
		index++;
	}
	return (*str1 - *str2);
}
