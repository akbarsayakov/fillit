/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <asayakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 14:46:18 by asayakov          #+#    #+#             */
/*   Updated: 2020/01/26 16:53:23 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		try_pos(t_etr *tetr, char **map, int x, int y)
{
	int	i;
	int	j;
	int	a[2];

	i = 0;
	a[0] = x;
	a[1] = y;
	while (i < tetr->w)
	{
		j = 0;
		while (j < tetr->h)
		{
			if (tetr->p[j][i] == '#' && map[y + j][x + i] != '.')
				return (0);
			j++;
		}
		i++;
	}
	set(tetr, map, a, tetr->l);
	return (1);
}

int		get_size(char **m)
{
	int	i;

	i = 0;
	while (m[0][i])
		i++;
	return (i);
}

int		map_solver(char **map, t_list *list)
{
	int		sz;
	int		a[2];
	t_etr	*tetr;

	a[1] = 0;
	sz = get_size(map);
	tetr = (t_etr *)(list->content);
	while (a[1] < sz - tetr->h + 1)
	{
		a[0] = 0;
		while (a[0] < sz - tetr->w + 1)
		{
			if (try_pos(tetr, map, a[0], a[1]))
			{
				if (!list->next || map_solver(map, list->next))
					return (1);
				else
					set(tetr, map, a, '.');
			}
			a[0]++;
		}
		a[1]++;
	}
	return (0);
}

char	**solve(t_list *list)
{
	char	**map;
	int		size;

	size = ft_sqrt(ft_lstcount(list) * 4);
	map = new_map(size);
	if (!list)
		return (map);
	while (!map_solver(map, list))
	{
		size++;
		map_delete(map);
		map = new_map(size);
	}
	return (map);
}
