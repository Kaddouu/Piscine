/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:12:40 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/09/29 23:35:51 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	display_grid(int grid[SIZE][SIZE]);

int	main(int argc, char argv[])
{
	int		grid[SIZE][SIZE];
	int		i;
	char	str;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	i = 0;
	str = argv[1];
	while (i < SIZE * SIZE)
	{
		while (str == ' ')
			str++;
		if (str >= '1' && str <= '4')
		{
			grid[i / SIZE][i % SIZE] = str - '0';
			i++;
		}
		else
		{
			write(1, "Error\n", 6);
			return (1);
		}
		while (str != ' ' && str != '\0')
		str++;
	}
	display_grid(grid);
	return (0);
}
