/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:09:20 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/09/28 16:10:32 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while ((i + 1) < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	while (dest[i])
		i++;
	return (i);
}
/*
int	main()
{
	char src[] = "1ere chaine";
	char dest[] = "caca";
	printf("%u\n", ft_strlcpy(dest, src, 20));
	return (0);
}*/
