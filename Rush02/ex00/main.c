/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:29:33 by kyang             #+#    #+#             */
/*   Updated: 2024/10/06 22:29:30 by kyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

char    **str_to_tabs(char *s);
int	count_tab(char **s);
char	**create_keys_array(char **array, int size);
int	print_all(char **s, char *buffer);
int	count_initial_tab(char *s);

int	main(int ac, char **av)
{
	char	**s;
	char	buffer[1000];
	int	reader;
	int	dict;
	int	l;

	if (ac == 2)
	{
		dict = open("numbers.dict", O_RDONLY);
		reader = read(dict, buffer, 1000);
 		s = str_to_tabs(av[1]);
		l = count_initial_tab(av[1]);
		s = create_keys_array(s, l);
		print_all(s, buffer);
        }
	else if (ac == 3)
	{
		dict = open(av[1], O_RDONLY);
		reader = read(dict, buffer, 1000); 	
		s = str_to_tabs(av[2]);
//		s = xxx;
		print_all(s, buffer);
        }
	return (0);
}
