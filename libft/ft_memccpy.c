/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:11:37 by asayakov          #+#    #+#             */
/*   Updated: 2019/08/07 23:38:42 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	unsigned char		*ptr1;
	const unsigned char *ptr2;

	ptr1 = (unsigned char *)str1;
	ptr2 = (const unsigned char *)str2;
	while (n--)
	{
		*ptr1++ = *ptr2;
		if (*ptr2++ == (unsigned char)c)
			return (ptr1);
	}
	return (NULL);
}
