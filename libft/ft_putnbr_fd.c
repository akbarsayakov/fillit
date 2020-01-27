/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 22:06:47 by asayakov          #+#    #+#             */
/*   Updated: 2019/09/09 22:06:49 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num < 10)
	{
		ft_putchar_fd(num + '0', fd);
		return ;
	}
	ft_putnbr_fd(num / 10, fd);
	ft_putnbr_fd(num % 10, fd);
}
