/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjandri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:20:36 by bjandri           #+#    #+#             */
/*   Updated: 2023/08/21 12:09:37 by bjandri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	test;

	test = *a;
	*a = *b;
	*b = test;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	end;
	int	j;

	end = size - 1;
	j = 0;
	while (j < end)
	{
		if (tab[j] > tab[j + 1])
		{
			ft_swap(&tab[j], &tab[j + 1]);
			j = 0;
		}
		else
			j++;
	}
}
