/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:24:55 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/19 21:51:48 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*f;
	unsigned char	*t;
	size_t			i;

	i = 0;
	f = ((unsigned char *)s1);
	t = ((unsigned char *)s2);
	if (!f && !t)
		return (0);
	if (i == n)
		return (0);
	while (i < n - 1 && f[i] == t[i])
		i++;
	return (f[i] - t[i]);
}
