/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:12:30 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/08 18:24:38 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*l;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s1;
	l = (unsigned char *)s2;
	if (!s1 && !s2)
		return (0);
	if (n == 0)
		return (0);
	while (p[i] == l[i] && (i < n) && p[i] && l[i])
		i++;
	if (i == n)
		return (0);
	return (p[i] - l[i]);
}
