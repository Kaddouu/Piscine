/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:27:09 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/09/29 23:29:07 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#define SIZE 4

void	display_grid(int grid[SIZE][SIZE])
{
	int		i;
	int		j;
	char	c;

	j = 0;
	i = 0;
	while (i < SIZE)
	{
		while (j < SIZE)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
				if (j < SIZE - 1) 
					write(1, " ", 1);
					j++;
		}
		write(1, "\n", 1);
	i++;
	}
}
