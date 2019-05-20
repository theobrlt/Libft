/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrault <tbrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 17:12:11 by tbrault           #+#    #+#             */
/*   Updated: 2019/05/20 11:06:00 by tbrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	void			*r;
	int				i;

	src = (unsigned char*)s;
	i = 0;
	while (n > 0)
	{
		if (src[i] == (unsigned char)c)
		{
			r = (void*)s + i;
			return (r);
		}
		i++;
		n--;
	}
	r = NULL;
	return (r);
}
