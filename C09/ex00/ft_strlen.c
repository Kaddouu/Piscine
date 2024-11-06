/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:46:56 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/09/23 11:26:25 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{	
	int	len;

	len = 0;
	while (str[len] != '\0')
	{	
		len++;
	}
	return (len);
}
/*
int	main(void)
{
	char	*str;

	str = "Bonjour";
	printf("%d\n", ft_strlen(str));
}
*/
