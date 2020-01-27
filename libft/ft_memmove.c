/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 18:05:09 by asayakov          #+#    #+#             */
/*   Updated: 2019/08/09 18:05:12 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	if (str1 == str2)
		return (str1);
	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	if (ptr2 > ptr1)
	{
		while (n-- > 0)
			*ptr1++ = *ptr2++;
	}
	else
	{
		while ((int)(--n) >= 0)
			*(ptr1 + n) = *(ptr2 + n);
	}
	return (str1);
}
