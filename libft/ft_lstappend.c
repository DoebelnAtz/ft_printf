/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:32:16 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/17 15:44:30 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstappend(t_list **alst, t_list *new)
{
	t_list *prev;
	t_list *current;

	if (new)
	{
		if (*alst)
		{
			current = *alst;
			while (current)
			{
				prev = current;
				current = current->next;
			}
			prev->next = new;
		}
		else
			*alst = new;
	}
}
