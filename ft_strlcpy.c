/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:34:44 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/08 11:33:17 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *source, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (destsize > 0)
	{
		while (source[j] && j < destsize - 1)
		{
			dest[j] = source[j];
			j++;
		}
		dest[j] = '\0';
	}
	while (source[i])
		i++;
	return (i);
}
