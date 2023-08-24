/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjandri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:56:33 by bjandri           #+#    #+#             */
/*   Updated: 2023/08/23 08:17:38 by bjandri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowercase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i==0){
				str[i] -= 32;
			}else if (str[i - 1] < '0' || str[i - 1] > '9')
			{
				if (str[i - 1] < 'A' || str[i - 1] > 'Z')
				{
					if (str[i - 1] < 'a' || str[i - 1] > 'z')
					{
						str[i] -= 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}


int main(void)
{
	char name[] = "h-hhmm";

	printf("%s ", ft_strcapitalize(name)); 
}