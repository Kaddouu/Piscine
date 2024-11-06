/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkouton- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:34:31 by dkouton-          #+#    #+#             */
/*   Updated: 2024/09/21 20:20:56 by gllamosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	check(int x, int y)
{
	if (x < 1 || y < 1)
	{
		write (1, "Les chromosomes x et y sont toujours positifs :)", 48);
		return (0);
	}
	else
		return (1);
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (!check(x, y))
		return ;
	row = 0;
	while (++row <= y)
	{
		col = 0;
		while (++col <= x)
		{
			if ((row == 1 && col == 1) || (row == y && col == 1))
				ft_putchar('A');
			else if ((row == 1 && col == x) || (col == x && row == y))
				ft_putchar('C');
			else if (row == 1 || row == y || col == 1 || col == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
