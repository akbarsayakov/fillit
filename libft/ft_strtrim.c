/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 23:11:43 by asayakov          #+#    #+#             */
/*   Updated: 2019/09/05 23:11:45 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t start;
	size_t finish;

	if (!s)
		return (NULL);
	start = 0;
	finish = ft_strlen(s);
	while (ft_spacetabnewl(s[start]))
		start++;
	while (ft_spacetabnewl(s[finish - 1]))
		finish--;
	if (finish < start)
		finish = start;
	return (ft_strsub(s, start, finish - start));
}
