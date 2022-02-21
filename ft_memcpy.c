/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:12:26 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/19 21:52:02 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*s_dst;
	const char		*s_src;

	i = 0;
	s_dst = dst;
	s_src = src;
	if (!s_dst && !s_src)
		return (0);
	while (i < n)
	{
		s_dst[i] = s_src[i];
		i++;
	}
	return (dst);
}
