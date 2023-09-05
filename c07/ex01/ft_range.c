/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjandri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 09:49:54 by bjandri           #+#    #+#             */
/*   Updated: 2023/09/03 11:32:31 by bjandri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*res;

	size = max - min;
	i = 0;
	if (min >= max)
		return (0);
	res = (int *)malloc((size) * sizeof(int));
	if (!res)
		return (0);
	while (min < max)
	{
		res[i++] = min++;
	}
	return (res);
}
