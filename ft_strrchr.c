/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:44:50 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/19 21:52:42 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			len;
	char		*f;

	len = 0;
	f = (char *)s;
	while (f[len])
		len++;
	while (len >= 0)
	{
		if (f[len] == (char)c)
			return (f + len);
		len--;
	}
	return (0);
}
