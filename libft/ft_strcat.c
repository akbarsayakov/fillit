/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 02:02:13 by asayakov          #+#    #+#             */
/*   Updated: 2019/08/14 02:02:18 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;

	i = ft_strlen(dest);
	while (*src)
	{
		dest[i++] = *src++;
	}
	dest[i] = '\0';
	return (dest);
}
