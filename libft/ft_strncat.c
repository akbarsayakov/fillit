/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 02:17:08 by asayakov          #+#    #+#             */
/*   Updated: 2019/08/14 02:17:11 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int	i;

	i = ft_strlen(dest);
	while (*src && n--)
	{
		dest[i++] = *src++;
	}
	dest[i] = '\0';
	return (dest);
}
