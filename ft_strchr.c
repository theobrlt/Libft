/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrault <tbrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 18:48:34 by tbrault           #+#    #+#             */
/*   Updated: 2019/06/06 13:32:25 by tbrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c1;

	c1 = (unsigned char)c;
	while (*(s))
	{
		if (*(s) == c1)
			return ((char*)s);
		s++;
	}
	if (*(s) == '\0' && c1 == '\0')
		return ((char*)s);
	return (NULL);
}
