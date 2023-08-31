/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjandri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:14:07 by bjandri           #+#    #+#             */
/*   Updated: 2023/08/29 10:28:03 by bjandri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	pw;

	i = 1;
	pw = nb;
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (nb == 0 || nb == 1 || power == 0)
		return (1);
	while (i < power)
	{
		pw = pw * nb;
		i++;
	}
	return (pw);
}
