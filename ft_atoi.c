/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrault <tbrault@42student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 08:52:46 by tbrault           #+#    #+#             */
/*   Updated: 2019/06/06 11:57:13 by tbrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long int	sign;
	long long int	result;

	sign = 1;
	result = 0;
	while (*(str) == ' ' || *(str) == '\t' || *(str) == '\n'
			|| *(str) == '\v' || *(str) == '\f' || *(str) == '\r')
		str++;
	if (*(str) == '-' || *(str) == '+')
	{
		if (*(str) == '-')
			sign = -1;
		str++;
	}
	if (*(str) >= 48 && *(str) <= 57)
	{
		while (*(str) >= 48 && *(str) <= 57)
			result = (result * 10) + (long long int)*(str)++ - 48;
	}
	return ((int)(result * sign));
}
