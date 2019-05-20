/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrault <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:31:20 by tbrault           #+#    #+#             */
/*   Updated: 2019/04/18 17:24:47 by tbrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printlist(t_list *list)
{
	while (list)
	{
		ft_putstr((const char*)list->content);
		list = list->next;
	}
}
