/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:55:05 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/10/02 21:20:04 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = nb;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power - 1)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*	int main(int argc, char**argv)
{
	(void)argc;
	printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return 0;
}*/
