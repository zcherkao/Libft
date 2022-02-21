/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:05:20 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/19 20:56:18 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*p;
	char		*l;

	p = src;
	l = dst;
	if (l > p)
	{
		l = l + len;
		p = p + len;
		while (len-- > 0)
			*--l = *--p;
	}
	else
		ft_memcpy(l, p, len);
	return (dst);
}
