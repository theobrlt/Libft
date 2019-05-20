/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrault <tbrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:56:45 by tbrault           #+#    #+#             */
/*   Updated: 2019/05/20 11:03:34 by tbrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char		*ft_positive(int n)
{
	int		size;
	char	*nbr;
	int		end;
	int		n_cpy;

	size = 0;
	n_cpy = n;
	while (n_cpy > 9)
	{
		n_cpy = n_cpy / 10;
		size++;
	}
	if (!(nbr = (char*)malloc(sizeof(char) * (size + 2))))
		return (NULL);
	end = size + 1;
	while (size >= 0)
	{
		nbr[size] = (n % 10) + 48;
		size--;
		n = n / 10;
	}
	nbr[end] = '\0';
	return (nbr);
}

static char		*ft_negative(int n)
{
	int		size;
	char	*nbr;
	int		end;
	int		n_cpy;

	size = 0;
	n_cpy = n;
	while (n_cpy < -9)
	{
		n_cpy = n_cpy / 10;
		size++;
	}
	if (!(nbr = (char*)malloc(sizeof(char) * (size + 3))))
		return (NULL);
	end = size + 2;
	while (size >= 0)
	{
		nbr[size + 1] = ((n % 10) - 48) * -1;
		size--;
		n = n / 10;
	}
	nbr[0] = '-';
	nbr[end] = '\0';
	return (nbr);
}

char			*ft_itoa(int n)
{
	if (n < 0)
		return (ft_negative(n));
	return (ft_positive(n));
}
