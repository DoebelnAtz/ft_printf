/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 11:48:45 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/21 12:51:53 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len_src;
	char	*new_string;

	len_src = ft_strlen(src);
	if (!(new_string = malloc(len_src + 1)))
		return (0);
	ft_strcpy(new_string, src);
	return (new_string);
}
