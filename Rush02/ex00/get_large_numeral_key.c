/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_large_numeral_key.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hganet <hganet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:24:10 by hganet            #+#    #+#             */
/*   Updated: 2024/10/06 18:31:37 by hganet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*get_large_numeral_key(int size)
{
	int		i;
	int		power;
	char	*numeral_key;

	if (size == 1)
		return ("");
	else if (size > 1)
		power = (size - 1) * 3 + 1;
	else
		power = size * 3;
	numeral_key = (char *)malloc(power + 1 * sizeof(int));
	numeral_key[0] = '1';
	i = 1;
	while (i < power)
	{
		numeral_key[i] = '0';
		i++;
	}
	numeral_key[power] = '\0';
	return (numeral_key);
}
