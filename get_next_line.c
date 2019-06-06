/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrault <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 20:18:09 by tbrault           #+#    #+#             */
/*   Updated: 2019/06/06 14:04:14 by tbrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#define BUFF_SIZE 10

static char		*ft_add_buffer(char *s1, char *s2)
{
	int		dstlen;
	char	*dst;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dstlen = ft_strlen(s1) + ft_strlen(s2);
	if (!(dst = (char*)malloc(sizeof(char) * (dstlen + 1))))
		return (NULL);
	ft_strcpy(dst, s1);
	ft_strcat(dst, s2);
	free(s1);
	return (dst);
}

static char		*ft_str_cut(char *str, int i)
{
	char	*dst;
	int		j;

	if ((str) == NULL)
		return (NULL);
	if (!(dst = (char*)malloc(sizeof(char) * (ft_strlen(str) - i))))
		return (NULL);
	j = 0;
	if (str[i] == '\n')
		i++;
	while (str[i] != '\0')
		dst[j++] = str[i++];
	dst[j] = '\0';
	free(str);
	return (dst);
}

static char		*ft_str_loop(char *buff, char *str, int ret)
{
	buff[ret] = '\0';
	if (str == NULL)
		str = ft_strnew(0);
	str = ft_add_buffer(str, buff);
	return (str);
}

static int		ft_newline(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static char		*str = NULL;
	int				i;
	char			buff[BUFF_SIZE + 1];

	if (fd < 0 || line == NULL || read(fd, buff, 0) < 0)
		return (-1);
	while ((i = read(fd, buff, BUFF_SIZE)) > 0)
	{
		str = ft_str_loop(buff, str, i);
		if (ft_newline(str) == 1)
			break ;
	}
	if (!(i = 0) && str == NULL)
		return (0);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\n' || (str[i] == '\0' && ft_strlen(str) > 0))
	{
		*line = ft_strsub(str, 0, i);
		str = ft_str_cut(str, i);
		return (1);
	}
	if ((*line == NULL) && str)
		ft_strdel(&str);
	return (0);
}
