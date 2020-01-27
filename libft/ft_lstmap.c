/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 00:08:15 by asayakov          #+#    #+#             */
/*   Updated: 2019/09/12 00:08:17 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *node_ptr;

	if (!lst || !f)
		return (NULL);
	node_ptr = f(lst);
	head = node_ptr;
	while (lst->next)
	{
		lst = lst->next;
		if (!(node_ptr->next = f(lst)))
		{
			free(node_ptr->next);
			return (NULL);
		}
		node_ptr = node_ptr->next;
	}
	return (head);
}
