/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjandri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 06:52:26 by bjandri           #+#    #+#             */
/*   Updated: 2023/08/21 15:10:58 by bjandri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	test;

	test = *a;
	*a = *b;
	*b = test;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	end;

	i = 0;
	end = size - 1;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[end - i]);
		i++;
	}
}
