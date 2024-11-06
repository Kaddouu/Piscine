/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:39:47 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/10/05 19:27:00 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	n = 0;
	i = nb - 1;
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	while (i >= 1)
	{
		nb = nb * i;
		n = nb;
		i--;
	}
	return (n);
}

/*int main()
{
	printf("%d", ft_iterative_factorial(2));
}*/
