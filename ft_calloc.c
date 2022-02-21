/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:07:56 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/19 21:21:28 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	bytes;
	void	*s;

	bytes = count * size;
	s = (char *)malloc(bytes);
	if (s != NULL)
		ft_bzero (s, bytes);
	return (s);
}
