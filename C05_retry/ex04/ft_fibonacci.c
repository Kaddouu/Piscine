/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:24:07 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/10/02 23:41:56 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (index);
}
/*
int main(int argc, char**argv)
{
	(void)argc;
	printf("%d", ft_fibonacci(atoi(argv[1])));
		return (0);
}*/
