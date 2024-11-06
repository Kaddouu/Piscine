/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:36:57 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/10/06 21:56:52 by kyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int	ft_strlen(char *s);
int	count_tab(char **s);

int	word_offset(char *buffer, int size)
{
	while (buffer[size] == ' ')
		size++;
	while (buffer[size] == ':')
		size++;
	while (buffer[size] == ' ')
		size++;
	return (size);
}

char	*add_word(char *buffer, int size)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	size = word_offset(buffer, size);
	while ((!(buffer[size] < 32 || buffer[size] > 126)) && buffer[size + 1] != '\n')
	{
		i++;
		size++;
	}
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (0);
	while (j <= i)
	{
		word[j] = buffer[size - i + j];
		j++;
	}
	return (word);
}

char	*find_word(char *buffer, char *nb)
{
	int		i;
	int		k;
	int		end;
	char	*word_num;

	i = 0;
	end = 0;
	while (buffer[i] && end == 0)
	{
		k = 0;
		while (buffer[i + k] == nb[k])
			k++;
		if (nb[k] == '\0')
		{
			word_num = add_word(buffer, i + k);
			end = 1;
		}
		i++;
	}
	if (end == 0)
		return (NULL);
	return (word_num);
}

int	verify_word(char **s, char *buffer)
{
	int	i;

	i = 0;
	while (i < count_tab(s))
	{
		if (!find_word(buffer, s[i]))
			return (0);
		i++;
	}
	return (1);
}

int	print_all(char **s, char *buffer)
{
	int	i;

	i = 0;
	if (!(verify_word(s, buffer)))
	{
		write(2, "Dict Error\n", 11);
		return (0);
	}
	while (i < count_tab(s) - 1)
	{
		if (s[i][0] != '0' || (s[i][0] == '0' && i == 0)) 
		{
			write(1, find_word(buffer, s[i]), \
				ft_strlen(find_word(buffer, s[i])));
			if ((i != (count_tab(s) - 1)))
				write(1, " ", 1);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int		dict;
	char	buffer[1000];
	int		reader;
	char	s[][5] = {{"1"}, {"100"}, {"12"}, {"1000"}, {"1"}, {"100"}, {"0"}, {"0"}};

	dict = open("numbers.dict", O_RDONLY);
	reader = read(dict, buffer, 1000);	
	//find_word(buffer, av[1]);
	//verify_word(s, buffer);
	//printf("%d",verify_word(s, buffer));
	print_all(s, buffer);
	//printf("%d", count_tab(s));
	return (0);
}*/
