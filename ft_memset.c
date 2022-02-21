/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:28:39 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/18 17:09:41 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (len)
	{
		*p = c;
		p++;
		len--;
	}
	p = str;
	return (p);
}
