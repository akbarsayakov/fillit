/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <asayakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 17:11:16 by asayakov          #+#    #+#             */
/*   Updated: 2020/01/26 16:48:34 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_map(char **map, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
		i++;
	}
}

void	map_delete(char **map)
{
	int i;
	int sz;

	i = 0;
	sz = get_size(map);
	{
		while (i < sz)
		{
			ft_memdel((void **)&(map[i]));
			i++;
		}
		ft_memdel((void **)&(map));
		ft_memdel((void **)&(map));
	}
}

void	set(t_etr *tetr, char **map, int *a, char c)
{
	int		i;
	int		j;

	i = 0;
	while (i < tetr->w)
	{
		j = 0;
		while (j < tetr->h)
		{
			if (tetr->p[j][i] == '#')
				map[a[1] + j][a[0] + i] = c;
			j++;
		}
		i++;
	}
}

char	**new_map(int size)
{
	char	**map;
	int		i;
	int		j;

	map = (char **)ft_memalloc(sizeof(char *) * size);
	i = 0;
	while (i < size)
	{
		map[i] = ft_strnew(size);
		j = 0;
		while (j < size)
		{
			map[i][j] = '.';
			j++;
		}
		i++;
	}
	return (map);
}
