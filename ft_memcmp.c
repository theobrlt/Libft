/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrault <tbrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 19:35:06 by tbrault           #+#    #+#             */
/*   Updated: 2019/05/20 11:06:25 by tbrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;
	int				i;

	one = (unsigned char*)s1;
	two = (unsigned char*)s2;
	i = 0;
	while (n > 0)
	{
		if (one[i] != two[i])
			return (one[i] - two[i]);
		i++;
		n--;
	}
	return (0);
}
