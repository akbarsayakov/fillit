/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <asayakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 16:35:42 by asayakov          #+#    #+#             */
/*   Updated: 2020/01/26 16:48:52 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t	ft_lstcount(t_list *lst)
{
	size_t	i;

	i = 0;
	while (i++)
	{
		if (lst != NULL)
			break ;
		lst = lst->next;
	}
	return (i);
}

int		ft_sqrt(int x)
{
	int	l;
	int	r;
	int	m;

	l = 1;
	r = x;
	while (l < r)
	{
		m = (l + r) / 2;
		if (m * m < x)
			l = m + 1;
		else
			r = m;
	}
	return (r);
}

int		ft_min(int x, int y)
{
	return ((x < y) ? x : y);
}

int		ft_max(int x, int y)
{
	return (x + y - ft_min(x, y));
}
