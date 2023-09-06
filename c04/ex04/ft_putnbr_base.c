/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjandri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 10:55:26 by bjandri           #+#    #+#             */
/*   Updated: 2023/09/02 12:02:19 by bjandri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_check(char *base)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		n = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[n])
		{
			if (base[i] == base[n])
				return (0);
			n++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		bs;
	long	nbrf;

	bs = 0;
	nbrf = nbr;
	while (base[bs])
		bs++;
	if (base_check(base))
	{
		if (nbrf < 0)
		{
			ft_putchar('-');
			nbrf *= -1;
		}
		if (nbrf < bs)
			ft_putchar(base[nbrf]);
		if (nbrf >= bs)
		{
			ft_putnbr_base(nbrf / bs, base);
			ft_putnbr_base(nbrf % bs, base);
		}
	}
}
