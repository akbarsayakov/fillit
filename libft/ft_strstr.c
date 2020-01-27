/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 21:44:49 by asayakov          #+#    #+#             */
/*   Updated: 2019/08/26 21:44:51 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int j;
	int k;

	if (!*needle)
		return ((char *)haystack);
	j = 0;
	while (haystack[j])
	{
		if (needle[0] == haystack[j])
		{
			k = 1;
			while (needle[k] == haystack[j + k] && needle[k])
				k++;
			if (needle[k] == '\0')
				return ((char *)&haystack[j]);
		}
		j++;
	}
	return (NULL);
}
