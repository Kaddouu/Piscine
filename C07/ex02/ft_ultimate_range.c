/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:51:23 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/10/07 18:25:29 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*int main(void)
{
	int j;
	int lenght;
	int	*range;

	lenght = ft_ultimate_range(&range, 7, 26);
	
	j = 0;
	while (j < lenght)
	{
		j++;
	}
	printf("%d", j);
	free(range);
	return (0);
}*/
