/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:04:24 by zcherkao          #+#    #+#             */
/*   Updated: 2021/11/19 15:07:45 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*#include <fcntl.h>

int	main()
{
	int	fd = open("/Users/zcherkao/Desktop/held.txt", O_RDONLY | O_CREAT);

	ft_putchar_fd('s', fd);
}*/