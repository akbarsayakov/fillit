/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 21:43:13 by asayakov          #+#    #+#             */
/*   Updated: 2019/08/24 21:43:19 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ptr;
	char *flag;

	flag = NULL;
	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (unsigned char)c)
			flag = ptr;
		ptr++;
	}
	if (flag)
		return (flag);
	if ((unsigned char)c == '\0')
		return (ptr);
	return (NULL);
}
