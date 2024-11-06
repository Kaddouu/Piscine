/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:12:26 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/10/08 21:07:51 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/ft.h"

int	ft_strcmp(char *s1, char *s2)
{	
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{	
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char s1[] = "Testz";
	char s2[] = "Testzdks";
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}*/
