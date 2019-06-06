/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrault <tbrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 19:35:06 by tbrault           #+#    #+#             */
/*   Updated: 2019/06/06 12:03:48 by tbrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;

	one = (unsigned char*)s1;
	two = (unsigned char*)s2;
	while (n > 0)
	{
		if (*(one) != *(two))
			return (*(one) - *(two));
		one++;
		two++;
		n--;
	}
	return (0);
}
