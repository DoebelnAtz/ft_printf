/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:07:21 by aadlercr          #+#    #+#             */
/*   Updated: 2019/10/21 15:12:38 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if ((new = (t_list*)malloc(sizeof(t_list))))
	{
		if (!content)
		{
			new->content = NULL;
			new->content_size = 0;
		}
		else
		{
			if (!(new->content = ft_memdup(content, content_size)))
				return (NULL);
			new->content_size = content_size;
		}
		new->next = NULL;
		return (new);
	}
	else
		return (NULL);
}
