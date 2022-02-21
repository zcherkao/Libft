/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:39:51 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/14 13:37:25 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1 + start);
	while (s1[end + start - 1] && ft_strchr(set, s1[end + start - 1]))
		end--;
	if (end + start <= 0)
	{
		str = (char *)malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof (char) * end + 1);
	if (str == 0)
		return (NULL);
	ft_strlcpy(str, s1 + start, end + 1);
	return (str);
}
