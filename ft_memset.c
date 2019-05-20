/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrault <tbrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 11:24:58 by tbrault           #+#    #+#             */
/*   Updated: 2019/05/20 11:07:31 by tbrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*uc;
	int				i;

	uc = b;
	i = 0;
	while (len > 0)
	{
		uc[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}
