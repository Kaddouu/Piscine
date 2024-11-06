/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_buffer_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:21:03 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/10/06 18:51:55 by kyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int	get_buffer_size(void)
{
	char	*buffer;
	int		buffer_size;
	int		dict;
	int		reader;

	buffer_size = 0;
	buffer = malloc(2);
	if (buffer == NULL)
		return (0);
	dict = open("numbers.dict", O_RDONLY);
	reader = read(dict, buffer, 1);
	while (reader != 0)
	{
		reader = read(dict, buffer, 1);
		if (reader == -1)
		{
			write(2, "Dict Error\n", 11);
			break ;
		}
		buffer_size++;
	}
	close(dict);
	return (buffer_size);
}
/*
int main()
{
	printf("%d", get_buffer_size());
}*/
