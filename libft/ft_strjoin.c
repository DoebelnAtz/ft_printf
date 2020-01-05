/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:38:03 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/18 17:30:32 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*joined;
	size_t			len1;
	size_t			len2;
	unsigned int	i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(joined = (char *)malloc(len1 + len2 + 1)))
		return (0);
	i = 0;
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2[i - len1])
	{
		joined[i] = s2[i - len1];
		i++;
	}
	joined[i] = '\0';
	return (joined);
}
