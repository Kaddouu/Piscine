/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:47 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/09/23 18:44:41 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}
/*
int	main()
{
	int	x = 0;
	int	size = 5;
	int	tab[] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(tab, size);
	while(x < size)
	{
		printf("%d", tab[x]);
		x++;
	}
}
*/
