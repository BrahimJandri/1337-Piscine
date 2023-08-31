/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjandri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:05:07 by bjandri           #+#    #+#             */
/*   Updated: 2023/08/29 11:17:09 by bjandri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power < 0)
		return (0);
	if (power == 0 || nb == 1 || nb == 0)
		return (1);
	else
		num *= nb * ft_recursive_power(nb, power - 1);
	return (num);
}
