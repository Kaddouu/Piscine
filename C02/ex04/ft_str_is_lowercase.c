/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:53:35 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/09/24 19:06:19 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	r;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
	{	
		r = str[i];
		if (r >= 'a' && r <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase("abjdhkf"));
	printf("%d\n", ft_str_is_lowercase("jkQDk"));
}*/
