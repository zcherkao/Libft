/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:15:36 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/19 21:00:48 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_getlength(char const *s, unsigned int start, size_t len)
{
	size_t	slen;

	slen = ft_strlen(s) - start;
	if (len < slen)
		return (len);
	return (slen);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	new_length;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	new_length = ft_getlength(s, start, len);
	dest = (char *)malloc(sizeof(char) * new_length + 1);
	if (dest == NULL)
		return (NULL);
	ft_memcpy (dest, s + start, new_length);
	dest[len] = '\0';
	return (dest);
}
