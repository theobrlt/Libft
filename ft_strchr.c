/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrault <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 18:48:34 by tbrault           #+#    #+#             */
/*   Updated: 2019/04/12 19:14:26 by tbrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c1;
	int				i;

	c1 = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c1)
			return ((char*)s + i);
		i++;
	}
	if (s[i] == '\0' && c1 == '\0')
		return ((char*)s + i);
	return (NULL);
}
