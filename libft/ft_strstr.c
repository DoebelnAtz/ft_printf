/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:41:50 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/18 17:38:57 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *matchingptr;
	char *sub;

	sub = (char *)needle;
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack != *sub)
		{
			haystack += 1;
			continue ;
		}
		matchingptr = (char *)haystack;
		while (1)
		{
			if (*sub == 0)
				return ((char *)haystack);
			if (*matchingptr++ != *sub++)
				break ;
		}
		sub = (char *)needle;
		haystack += 1;
	}
	return (0);
}
