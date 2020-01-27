/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 23:40:04 by asayakov          #+#    #+#             */
/*   Updated: 2019/09/03 23:40:06 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			*ptr;

	i = 0;
	if (!s || !f || !(str = ft_strnew(ft_strlen(s))))
		return (NULL);
	ptr = str;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
