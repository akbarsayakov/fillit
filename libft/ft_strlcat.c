/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 14:10:40 by asayakov          #+#    #+#             */
/*   Updated: 2019/08/24 14:10:42 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ds;
	size_t	ss;

	ds = ft_strlen(dest);
	ss = ft_strlen(src);
	if (size <= ds)
		ss += size;
	else
		ss += ds;
	while (*src && ds + 1 < size)
	{
		dest[ds] = *src++;
		ds++;
	}
	dest[ds] = '\0';
	return (ss);
}
