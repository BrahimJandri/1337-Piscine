/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjandri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:40:11 by bjandri           #+#    #+#             */
/*   Updated: 2023/09/05 14:24:28 by bjandri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	while (str[i])
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (!dest)
		return (0);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock)
		return (0);
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strcpy(av[i]);
		i++;
	}
	stock[i].size = 0;
	stock[i].str = 0;
	stock[i].copy = 0;
	return (stock);
}
