/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrault <tbrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 14:57:17 by tbrault           #+#    #+#             */
/*   Updated: 2019/05/20 11:14:17 by tbrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		dstlen;
	char	*dst;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dstlen = ft_strlen(s1) + ft_strlen(s2);
	dst = (char*)malloc(sizeof(char) * (dstlen + 1));
	if (dst == NULL)
		return (NULL);
	ft_strcpy(dst, s1);
	ft_strcat(dst, s2);
	return (dst);
}
