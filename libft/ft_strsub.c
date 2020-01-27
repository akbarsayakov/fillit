/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 22:50:52 by asayakov          #+#    #+#             */
/*   Updated: 2019/09/04 22:50:54 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (!s || !(str = ft_strnew(len)))
		return (NULL);
	str = ft_strncpy(str, (char *)s + start, len);
	return (str);
}
