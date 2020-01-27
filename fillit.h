/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <asayakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:36:09 by asayakov          #+#    #+#             */
/*   Updated: 2020/01/26 16:55:26 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"

typedef struct	s_etr
{
	int			w;
	int			h;
	char		l;
	char		**p;
}				t_etr;

t_list			*read_tetr(int fd);
t_etr			*new_tetris(char **p, int w, int h, char l);
t_list			*del_list(t_list *list);
void			reverse(t_list **list);
char			**solve(t_list *list);
char			**new_map(int size);
int				get_size(char **m);
void			set(t_etr *tetr, char **map, int *a, char c);
void			map_delete(char **map);
void			print_map(char **map, int size);
size_t			ft_lstcount(t_list *lst);
int				ft_sqrt(int x);
int				ft_min(int x, int y);
int				ft_max(int x, int y);
#endif
