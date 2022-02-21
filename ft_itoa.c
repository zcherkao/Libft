/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:22:21 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/19 21:50:50 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(int nb)
{
	int	i;

	if (nb <= 0)
		nb *= -1;
	i = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		negative;
	int		ln;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	negative = n < 0;
	ln = len (n);
	if (n < 0)
		n *= -1;
	str = (char *)malloc(sizeof (char) * (ln + 1 + negative));
	if (str == 0)
		return (NULL);
	ln += negative;
	str[ln] = '\0';
	while (ln--)
	{
		str[ln] = n % 10 + 48;
		n = n / 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
