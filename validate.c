/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <asayakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 16:20:41 by asayakov          #+#    #+#             */
/*   Updated: 2020/01/26 16:50:13 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	max_min(char *str, int *a)
{
	int i;

	i = 0;
	while (i < 20)
	{
		if (str[i] == '#')
		{
			a[0] = ft_min(i / 5, a[0]);
			a[2] = ft_max(i / 5, a[2]);
			a[1] = ft_min(i % 5, a[1]);
			a[3] = ft_max(i % 5, a[3]);
		}
		i++;
	}
}

t_etr	*make_piece(char *str, char ch)
{
	t_etr	*tetr;
	int		a[4];
	int		i;
	char	**pos;

	a[0] = 3;
	a[1] = 3;
	a[2] = 0;
	a[3] = 0;
	max_min(str, a);
	pos = ft_memalloc(sizeof(char *) * (a[2] - a[0] + 1));
	i = 0;
	while (i < a[2] - a[0] + 1)
	{
		pos[i] = ft_strnew(a[3] - a[1] + 1);
		ft_strncpy(pos[i], str + (a[1]) + (i + a[0]) * 5, a[3] - a[1] + 1);
		i++;
	}
	tetr = new_tetris(pos, a[3] - a[1] + 1, a[2] - a[0] + 1, ch);
	return (tetr);
}

int		connections(char *buf)
{
	int i;
	int block;

	i = 0;
	block = 0;
	while (i < 20)
	{
		if (buf[i] == '#')
		{
			if ((i + 1) < 20 && buf[i + 1] == '#')
				block++;
			if ((i - 1) >= 0 && buf[i - 1] == '#')
				block++;
			if ((i + 5) < 20 && buf[i + 5] == '#')
				block++;
			if ((i - 5) >= 0 && buf[i - 5] == '#')
				block++;
		}
		i++;
	}
	return (block == 6 || block == 8);
}

int		valid_counts(char *str, int len)
{
	int	i;

	i = 0;
	while (i < 20)
	{
		if (i % 5 < 4 && str[i] != '#' && str[i] != '.')
			return (1);
		else if (i != 19 && i % 5 == 4 && str[i] != '\n')
			return (1);
		i++;
	}
	if (!connections(str) || (len == 21 && str[20] != '\n'))
		return (1);
	return (0);
}

t_list	*read_tetr(int fd)
{
	t_list	*list;
	t_etr	*tetr;
	char	buf[21];
	int		n;
	int		l[2];

	n = 0;
	ft_memset(buf, '\0', 21);
	list = NULL;
	while ((l[0] = read(fd, buf, 21)) >= 19)
	{
		l[1] = l[0];
		if (valid_counts(buf, l[0]) ||
			(tetr = make_piece(buf, (n + 'A'))) == NULL)
			return (del_list(list));
		ft_lstadd(&list, ft_lstnew(tetr, sizeof(t_etr)));
		ft_memdel((void **)&tetr);
		n++;
	}
	if (l[0] || l[1] != 20)
		return (del_list(list));
	reverse(&list);
	return (list);
}
