/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:20:42 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/10 16:08:43 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd ("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		ft_putnbr_fd (-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putchar_fd (n % 10 + '0', fd);
	}
	else
		ft_putchar_fd (n + '0', fd);
}
