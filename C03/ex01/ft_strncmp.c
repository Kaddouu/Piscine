/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:18:19 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/10/01 18:03:11 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char s1[] = "Tfst";
	char s2[] = "Test";
	printf("%d\n", ft_strncmp(s1, s2, 4));
	return (0);
}*/
