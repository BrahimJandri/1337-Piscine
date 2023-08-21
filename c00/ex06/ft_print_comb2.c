/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjandri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 08:22:25 by bjandri           #+#    #+#             */
/*   Updated: 2023/08/20 08:36:44 by bjandri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(int n)
{
	int	i;

	i = (n / 10) + 48;
	write(1, &i, 1);
	i = (n % 10) + 48;
	write(1, &i, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1 ;
		while (b <= 99)
		{
			print(a);
			write(1, " ", 1);
			print(b);
			if (a < 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
