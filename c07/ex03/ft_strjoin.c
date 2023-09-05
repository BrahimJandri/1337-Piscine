/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjandri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:53:13 by bjandri           #+#    #+#             */
/*   Updated: 2023/09/04 19:02:40 by bjandri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_strs(char **str, int nb, char *sep)
{
	int	i;
	int	j;
	int	al;

	i = 0;
	j = 0;
	al = 0;
	while (i < nb)
	{
		j = 0;
		while (str[i][j++])
			al++;
		if (i < nb - 1)
		{
			j = 0;
			while (sep[j++])
				al++;
		}
		i++;
	}
	return (al);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*p;

	i = 0;
	k = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	p = (char *)malloc(len_strs(strs, size, sep) + 1);
	if (!p)
		return (0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			p[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			p[k++] = sep[j++];
		i++;
	}
	p[k] = '\0';
	return (p);
}
