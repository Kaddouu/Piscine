/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:09:45 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/10/01 17:25:47 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{	
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
#include <string.h>
int main(int ac, char**argv)
{	
	if (ac != 3)
		return (0);
	char *sentence = argv[1];
	char *in_it = argv[2];
	
	printf("%s\n", ft_strstr(sentence, in_it));
	return (0);
}*/
