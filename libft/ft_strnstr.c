/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 23:15:02 by asayakov          #+#    #+#             */
/*   Updated: 2019/08/26 23:15:08 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int j;
	unsigned int k;

	if (!*needle)
		return ((char *)haystack);
	j = 0;
	while (haystack[j] && (size_t)j < len)
	{
		if (needle[0] == haystack[j])
		{
			k = 1;
			while (needle[k] == haystack[j + k] && needle[k] &&
					(size_t)(j + k) < len)
				k++;
			if (needle[k] == '\0')
				return ((char *)&haystack[j]);
		}
		j++;
	}
	return (NULL);
}
