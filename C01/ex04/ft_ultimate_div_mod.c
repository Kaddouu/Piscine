/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:29:05 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/09/21 10:10:04 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 25;
	b = 8;
	ft_ultimate_div_mod(&a, &b);
	printf("Resultat: %d\n", a);
	printf("Reste: %d\n", b);
}
*/
