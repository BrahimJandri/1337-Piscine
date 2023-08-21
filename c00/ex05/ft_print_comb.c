/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjandri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:57:56 by bjandri           #+#    #+#             */
/*   Updated: 2023/08/17 11:13:48 by bjandri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char c1, char c2)
{
	write(1, &c, 1);
	write(1, &c1, 1);
	write(1, &c2, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7' )
	{	
		b = a + 1;
		while (b <= '8' )
		{	
			c = b + 1;
			while (c <= '9' )
			{	
				ft_putchar(a, b, c);
				if (a == '7')
					return ;
				write(1, ", ", 2);
	c++;
			}
	b++;
		}
	a++;
	}
}
