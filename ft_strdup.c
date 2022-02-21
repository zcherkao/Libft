/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:38:10 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/19 16:32:29 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	i;
	char	*l;

	i = 0;
	l = (char *)src;
	dest = (char *) malloc (ft_strlen(src) + 1);
	if (dest == 0)
		return (0);
	while (src[i])
	{
		dest[i] = l[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
