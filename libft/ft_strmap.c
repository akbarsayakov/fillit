/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 23:06:54 by asayakov          #+#    #+#             */
/*   Updated: 2019/09/03 23:06:56 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	char *ptr;
	char *s2;

	if (!s || !f || !(str = ft_strnew(ft_strlen(s))))
		return (NULL);
	s2 = (char *)s;
	ptr = str;
	while (*s2)
		*(ptr++) = f(*(s2++));
	return (str);
}
