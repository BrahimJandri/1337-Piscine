/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjandri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:34:46 by bjandri           #+#    #+#             */
/*   Updated: 2023/08/24 10:34:49 by bjandri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int resu;
    int sign;
    int i;
    
    i = 0;
    resu = 0;
    sign = 1;
    
    while(str[i] == 32 || (str[i] <= 9 && str[i] >= 13))
    i++;
    if(str[i] == '-')
    sign *= -1;
    if(str[i] == '-' || str[i] == '+')
    i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        resu = resu * 10 + str[i] - '0';
        i++;
    }
    return (resu * sign);
}

int main(int ac, char **av)
{
    int ino;
    int tinsn;
    
    if(ac == 2)
    {
    ino = ft_atoi(av[1]);
    tinsn = atoi(av[1]);
    printf("ino : %d |tinsn : %d\n", ino, tinsn);
    }
    return 0;
}

