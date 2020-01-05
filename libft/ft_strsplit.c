/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:07:57 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/21 14:31:03 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_limitlen(const char *s, char c)
{
	unsigned int len;
	unsigned int i;

	len = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		len++;
	}
	return (len);
}

static unsigned int	ft_word_count(const char *s, char c)
{
	unsigned int len;
	unsigned int i;

	len = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		len++;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c)
			i++;
	}
	return (len);
}

char				**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	char			*str;
	char			**split;

	i = 0;
	j = 0;
	if (!(split = (char **)malloc(ft_word_count(s, c) * sizeof(char *) + 1)))
		return (0);
	while ((len = ft_limitlen(s, c)))
	{
		i = 0;
		while (*s == c)
			s++;
		str = (char *)malloc(len + 1);
		while (*s != c && *s)
			str[i++] = *s++;
		str[i] = '\0';
		split[j++] = str;
		while (*s == c)
			s++;
	}
	split[j] = 0;
	return (split);
}
