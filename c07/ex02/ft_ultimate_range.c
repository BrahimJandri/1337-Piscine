/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjandri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:31:18 by bjandri           #+#    #+#             */
/*   Updated: 2023/09/03 11:33:36 by bjandri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arry;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arry = (int *)malloc(size * sizeof(int));
	if (!arry)
		return (-1);
	i = 0;
	while (min < max)
	{
		arry[i++] = min++;
	}
	*range = arry;
	return (size);
}
