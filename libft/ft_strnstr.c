/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:20:40 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/18 18:19:46 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*matchingptr;
	char	*sub;
	size_t	i;
	size_t	nlen;

	i = 0;
	sub = (char *)needle;
	if (!(nlen = ft_strlen(needle)))
		return ((char *)haystack);
	while (*haystack != '\0' && i <= len)
	{
		if (i++ && *(haystack) != *sub && haystack++)
			continue ;
		matchingptr = (char *)haystack;
		while (1 && (i + nlen - 1) <= len)
		{
			if (*sub == 0)
				return ((char *)haystack);
			if (*matchingptr++ != *sub++)
				break ;
		}
		sub = (char *)needle;
		haystack++;
	}
	return (0);
}
