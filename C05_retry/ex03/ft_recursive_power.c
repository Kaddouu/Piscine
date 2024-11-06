/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:22:17 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/10/03 20:30:12 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
/*
int main()
{
	printf("%d", ft_recursive_power(3, 3));
	return (0);
}
*/
