/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:23:34 by asayakov          #+#    #+#             */
/*   Updated: 2019/09/07 19:23:36 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	num;

	len = ft_numlen(n);
	num = n;
	if (n < 0)
	{
		num = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = num % 10 + '0';
	while (num /= 10)
		str[--len] = num % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
