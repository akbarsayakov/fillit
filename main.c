/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <asayakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:05:29 by asayakov          #+#    #+#             */
/*   Updated: 2020/01/26 16:41:21 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_etr	*new_tetris(char **p, int w, int h, char l)
{
	t_etr	*tetr;

	tetr = ft_memalloc(sizeof(t_etr));
	tetr->p = p;
	tetr->h = h;
	tetr->w = w;
	tetr->l = l;
	return (tetr);
}

void	reverse(t_list **list)
{
	t_list	*prev;
	t_list	*current;
	t_list	*next;

	prev = NULL;
	current = *list;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*list = prev;
}

void	del_table(t_etr *tetris)
{
	int	height;

	height = 0;
	while (height < tetris->h)
	{
		ft_memdel((void **)(&(tetris->p[height])));
		height++;
	}
	ft_memdel((void **)(&(tetris->p)));
	ft_memdel((void **)(&tetris));
}

t_list	*del_list(t_list *list)
{
	t_etr	*tetr;
	t_list	*next;

	while (list)
	{
		tetr = (t_etr *)list->content;
		next = list->next;
		del_table(tetr);
		ft_memdel((void **)&list);
		list = next;
	}
	return (NULL);
}

int		main(int ac, char *av[])
{
	t_list	*list;
	char	**map;
	int		fd;
	int		i;
	int		size;

	if (ac != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	if (!(list = read_tetr(fd)))
	{
		ft_putstr("error");
		return (1);
	}
	map = solve(list);
	i = 0;
	size = get_size(map);
	print_map(map, size);
	map_delete(map);
	del_list(list);
	return (0);
}
