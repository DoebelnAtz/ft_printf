/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 18:17:47 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/18 12:24:33 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		lendest;
	char	*start;

	lendest = 0;
	start = s1;
	while (s1[lendest] != '\0')
		lendest++;
	ft_strcpy(s1 + lendest, s2);
	return (s1);
}
