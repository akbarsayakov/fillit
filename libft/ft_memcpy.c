/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 19:51:16 by asayakov          #+#    #+#             */
/*   Updated: 2019/08/07 17:41:21 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	if (str1 == str2)
		return (str1);
	ptr1 = (unsigned char *)str1;
	ptr2 = (const unsigned char *)str2;
	while (n-- > 0)
	{
		*(ptr1++) = *(ptr2++);
	}
	return (str1);
}
