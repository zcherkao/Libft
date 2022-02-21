/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:20:06 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/19 15:07:15 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void ft_f(unsigned int c, char* s)
{
	*s = 'C';
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>
int main()
{
	char s[] = "zakar";
	ft_striteri(s, &ft_f);
	printf("%s",s);
}*/