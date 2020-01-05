/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 18:17:47 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/18 12:24:54 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	lendest;
	size_t	counter;
	char	*start;

	counter = 0;
	lendest = 0;
	start = s1;
	while (s1[lendest] != '\0')
		lendest++;
	while (*s2 != '\0' && counter < n)
	{
		s1[lendest] = *s2;
		lendest++;
		counter++;
		s2++;
	}
	s1[lendest] = '\0';
	return (s1);
}
