/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:18:44 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/19 15:06:46 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;
	size_t	destlen;

	i = 0;
	srclen = 0;
	destlen = 0;
	while (src[srclen] != '\0')
		srclen++;
	while (dest[destlen] != '\0')
		destlen++;
	if (size == 0)
		return (srclen);
	else if (destlen >= size)
		return (size + srclen);
	while (i < size - destlen - 1 && src[i])
	{
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (srclen + destlen);
}
/*#include <stdio.h>
int main()
{
	char dst[] = "zakarie";
	char src[] = "cherkaoui";
	printf("%zu", ft_strlcat(dst, src, 6));
}*/