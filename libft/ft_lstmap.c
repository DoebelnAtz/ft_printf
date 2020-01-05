/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:30:00 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/18 12:24:05 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *head;

	if (!lst)
		return (0);
	new = f(lst);
	head = new;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new->next = f(lst)))
			return (0);
		new = new->next;
	}
	return (head);
}
