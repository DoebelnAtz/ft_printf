/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 14:29:03 by aadlercr          #+#    #+#             */
/*   Updated: 2019/11/04 18:31:34 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wcharlen(wchar_t wc)
{
	if (wc < 0x80)
		return (1);
	else if (wc < 0x800)
		return (2);
	else if (wc < 0x8000)
		return (3);
	return (4);
}
