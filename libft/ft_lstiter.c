/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 23:58:51 by asayakov          #+#    #+#             */
/*   Updated: 2019/09/11 23:58:53 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *node_ptr;

	if (!f || !lst)
		return ;
	node_ptr = lst;
	while (node_ptr)
	{
		f(node_ptr);
		node_ptr = node_ptr->next;
	}
}
