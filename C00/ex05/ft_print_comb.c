/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:46:28 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/09/23 18:48:23 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_numbers(char a, char b, char c)
{
	if (a <= '7' || b <= '8' || c <= '9')
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
	}
	if (a != '7')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_numbers(a, b, c);
			c++;
			}
		b++;
		}
	a++;
	}
}
/*
int main ()
{
	ft_print_comb();
}
*/
