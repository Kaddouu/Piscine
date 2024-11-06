/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:23:23 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/10/01 19:15:16 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	what_sign;
	int	nbr;

	what_sign = 1;
	nbr = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{	
		if (str[i] == '-')
			what_sign *= -1;
	i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr = (str[i] - 48) + nbr * 10;
		i++;
	}
	return (nbr * what_sign);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("  	 --++-+----fdg1234af46"));
	return (0);
}*/
