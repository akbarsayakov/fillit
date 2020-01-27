/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:22:07 by asayakov          #+#    #+#             */
/*   Updated: 2019/09/06 16:22:08 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(const char *str, char c)
{
	int count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str && *str != c)
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}
