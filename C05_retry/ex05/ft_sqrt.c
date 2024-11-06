/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 00:37:23 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/10/03 01:10:29 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	count;
	int	result;

	result = nb;
	count = 0;
	i = 0;
	while (result > 0)
	{
		if (i % 2 != 0)
		{
			result = result - i;
			count++;
		}
		i++;
	}
	if (nb == count * count)
		return (count);
	else
		return (0);
}
/*
int main(int argc, char**argv)
{
	(void)argc;
	printf("%d", ft_sqrt(atoi(argv[1])));
	return (0);
}*/
