/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:58:20 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/18 17:20:09 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trimlen(char const *s)
{
	unsigned int	len;
	unsigned int	i;
	int				found;

	found = 0;
	len = 0;
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[i])
	{
		found = 1;
		i++;
		len++;
	}
	if (found)
		i--;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && found)
	{
		i--;
		len--;
	}
	return (len);
}

char		*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	char			*trimmed;
	unsigned int	len;

	len = ft_trimlen(s);
	if (!(trimmed = (char *)malloc(len + 1)))
		return (0);
	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (len--)
	{
		trimmed[j++] = s[i++];
	}
	trimmed[j] = '\0';
	return (trimmed);
}
