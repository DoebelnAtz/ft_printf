/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_uc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 12:11:24 by aadlercr          #+#    #+#             */
/*   Updated: 2019/11/04 12:08:47 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putwstr(wchar_t *str)
{
	int i;

	i = 0;
	while (str[i] != L'\0')
	{
		ft_putwchar(str[i]);
		i += ft_wcharlen(str[i]);
	}
}
