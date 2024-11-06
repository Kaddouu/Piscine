/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:46:01 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/09/24 18:37:32 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	r;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
	{	
		r = str[i];
		if ((r >= 'a' && r <= 'z') || (r >= 'A' && r <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf("%d\n", ft_str_is_alpha(""));
    printf("%d\n", ft_str_is_alpha("Bonjour"));
	printf("%d\n", ft_str_is_alpha("B56on2jou1r"));


}*/
