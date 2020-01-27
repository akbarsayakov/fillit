/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:24:30 by asayakov          #+#    #+#             */
/*   Updated: 2019/09/06 15:24:31 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**ar;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!s || !c ||
	!(ar = (char **)ft_memalloc(ft_countwords(s, c) * sizeof(char *) + 1)))
		return (NULL);
	while (i < ft_countwords(s, c))
	{
		k = 0;
		if (!(ar[i] = ft_strnew(ft_wordlen(&s[j], c))))
			ar[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] && s[j] != c)
			ar[i][k++] = s[j++];
		ar[i][k] = '\0';
		i++;
	}
	ar[i] = NULL;
	return (ar);
}
