/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:15:50 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/09/24 11:49:57 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	z;

	i = 1;
	j = i;

	while(i < size)
	{
		while(j > 0 && tab[j - 1] > z)
		{
			tab[j] = tab[j - 1];
			j++;
		}
		z = tab[i];
		tab[j] = z;
		i++;
	}
}
/*
int main ()
{
	int tab;
	int i;

	i = 0;
	tab[] = {8, 9, 1, 3, 5, 7, 6};
	ft_sort_int_tab(&tab, 7);
	while(i < 7)
		{
			printf("%d ", tab[i]);
			i++;
		}
}
*/
