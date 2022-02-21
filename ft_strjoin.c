/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:20:00 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/19 15:06:54 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*s3;

	if (!s1)
		return ((char *)s2);
	len = ft_strlen ((char *)s1) + ft_strlen ((char *)s2) + 1;
	s3 = (char *)malloc(sizeof(char) * len);
	if (!s3)
		return (0);
	ft_strlcpy (s3, s1, ft_strlen(s1) + 1);
	ft_strlcat (s3, s2, len);
	return (s3);
}
/*#include <stdio.h>
int main()
{
	char s1[] = "zakarie ";
	char s2[] = "cherkaoui";
	char *str;
	str = ft_strjoin(s1, s2);
	printf("%s", str);
}*/