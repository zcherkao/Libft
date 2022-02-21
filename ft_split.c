/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:18:16 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/19 16:15:28 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_free(char **split, const char *start, size_t len)
{
	char	*copy;

	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
	{
		while ((*split)--)
			free (*split);
		free (split);
		return (0);
	}
	ft_strlcpy (copy, start, len + 1);
	return (copy);
}

static size_t	ft_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	const char	*start;
	char		**split;
	size_t		len;

	i = 0;
	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof (*split) * ft_count(s, c) + 1);
	if (!split)
		return (0);
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		start = s;
		len = 0;
		s--;
		while (*(++s) && *s != c)
			len++;
		if (*(s - 1) != c)
			split[i++] = ft_free(split, start, len);
	}
	split[i] = 0;
	return (split);
}
