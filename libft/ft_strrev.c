/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 14:04:53 by aadlercr          #+#    #+#             */
/*   Updated: 2019/11/04 12:34:26 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	*tmp;

	i = 0;
	len = ft_strlen(str);
	tmp = ft_strnew(len);
	while (str[i])
	{
		tmp[i] = str[len - i - 1];
		i++;
	}
	return (tmp);
}
