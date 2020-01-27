/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 22:48:47 by asayakov          #+#    #+#             */
/*   Updated: 2019/08/28 22:48:48 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int sign;
	int val;

	sign = 1;
	val = 0;
	while (*str && (*str == ' ' || *str == '\t' || *str == '\r' ||
		*str == '\v' || *str == '\f' || *str == '\n'))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9' && str)
	{
		val = val * 10 + *str - '0';
		str++;
	}
	return (val * sign);
}
