/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:47:19 by asayakov          #+#    #+#             */
/*   Updated: 2019/08/12 16:47:27 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		size;
	int		i;

	i = -1;
	size = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	while (s1[++i])
		ptr[i] = s1[i];
	ptr[i] = '\0';
	return (ptr);
}
