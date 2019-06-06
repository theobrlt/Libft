/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrault <tbrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:03:13 by tbrault           #+#    #+#             */
/*   Updated: 2019/06/06 13:52:42 by tbrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_c_char(char const *s, char c, int i)
{
	int		j;

	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

static int	ft_count_words(char const *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if ((s[i] != c || s[i] != '\0') && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int	*ft_declare(int *tab)
{
	tab[0] = 0;
	tab[1] = 0;
	tab[2] = 0;
	return (tab);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		ijk[3];

	if (!(s))
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_count_words(s, c) + 1))))
		return (NULL);
	ft_declare(ijk);
	while (ijk[0] < ft_count_words(s, c))
	{
		while (s[ijk[2]] == c)
			ijk[2]++;
		if (s[ijk[2]] == '\0')
			break ;
		if (!(tab[ijk[0]] = (char*)malloc(sizeof(char) *
						((ft_c_char(s, c, ijk[2]) + 1)))))
			return (NULL);
		ijk[1] = 0;
		while (s[ijk[2]] != c && s[ijk[2]] != '\0')
			tab[ijk[0]][ijk[1]++] = s[ijk[2]++];
		tab[ijk[0]++][ijk[1]] = '\0';
	}
	tab[ijk[0]] = 0;
	return (tab);
}
