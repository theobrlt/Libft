/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrault <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 19:44:07 by tbrault           #+#    #+#             */
/*   Updated: 2019/04/17 17:22:26 by tbrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*source;
	char		*dst;

	source = (const char *)src;
	dst = (char *)dest;
	if (source < dst)
		while (n--)
			dst[n] = source[n];
	else
		while (n--)
			*(dst++) = *(source++);
	return (dest);
}
