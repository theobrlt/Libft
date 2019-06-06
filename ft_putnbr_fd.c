/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrault <tbrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 17:12:55 by tbrault           #+#    #+#             */
/*   Updated: 2019/06/06 12:23:36 by tbrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	x;

	x = n;
	x < 0 ? ft_putchar_fd('-', fd) : x;
	x = x < 0 ? x * -1 : x;
	x >= 10 ? ft_putnbr_fd(x / 10, fd) : x;
	x >= 10 ? ft_putnbr_fd(x % 10, fd) : x;
	(x >= 0 && x <= 9) ? ft_putchar_fd(x + 48, fd) : x;
}
