/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:15:00 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/19 21:51:29 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	size_t		i;

	i = 0;
	p = s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((char *)&p[i]);
		i++;
	}
	return (NULL);
}
