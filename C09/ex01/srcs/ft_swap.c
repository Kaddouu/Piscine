/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:42:12 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/10/08 21:08:07 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/ft.h"

void	ft_swap(int *a, int *b)
{
	int	z;

	z = *a;
	*a = *b;
	*b = z;
}
/*
int main ()
{

	int a;
	int b;

	a = 25;
	b = 50;
	ft_swap(&a, &b);
	printf("a:%d ", a);
	printf("b:%d ", b);


}
*/	
