/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 23:32:35 by asayakov          #+#    #+#             */
/*   Updated: 2019/09/11 23:32:37 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *node_ptr;
	t_list *next_ptr;

	node_ptr = *alst;
	while (node_ptr)
	{
		next_ptr = node_ptr->next;
		ft_lstdelone(&node_ptr, del);
		node_ptr = next_ptr;
	}
	*alst = NULL;
}
