/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:17:23 by aadlercr          #+#    #+#             */
/*   Updated: 2019/11/02 11:29:44 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_nbrlen(int nb, int *len)
{
	if (nb == -2147483648)
	{
		(*len) += 2;
		ft_nbrlen(147483648, len);
	}
	else if (nb < 0)
	{
		(*len)++;
		ft_nbrlen(nb *= -1, len);
	}
	else if (nb < 10)
	{
		(*len)++;
	}
	else
	{
		ft_nbrlen(nb / 10, len);
		ft_nbrlen(nb % 10, len);
	}
}

static void		ft_retnbr(int nb, char **arr, int *index)
{
	if (nb == -2147483648)
	{
		arr[0][*index] = '-';
		(*index)++;
		arr[0][*index] = '2';
		(*index)++;
		ft_retnbr(147483648, arr, index);
	}
	else if (nb < 0)
	{
		arr[0][*index] = '-';
		(*index)++;
		ft_retnbr(nb *= -1, arr, index);
	}
	else if (nb < 10)
	{
		arr[0][*index] = nb + '0';
		(*index)++;
	}
	else
	{
		ft_retnbr(nb / 10, arr, index);
		ft_retnbr(nb % 10, arr, index);
	}
}

char			*ft_itoa(int n)
{
	char	*arr;
	int		index;
	int		len;

	len = 0;
	ft_nbrlen(n, &len);
	index = 0;
	if (!(arr = (char *)ft_memalloc(len + 1)))
		return (0);
	ft_retnbr(n, &arr, &index);
	arr[index] = '\0';
	return (arr);
}
