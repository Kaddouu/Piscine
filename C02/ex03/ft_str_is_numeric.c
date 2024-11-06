/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:41:23 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/09/24 18:47:27 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	char	r;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
	{
		r = str[i];
		if (r >= '0' && r <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
    printf("%d\n", ft_str_is_numeric(""));
    printf("%d\n", ft_str_is_numeric("Bonjour"));
    printf("%d\n", ft_str_is_numeric("1355"));


}
*/
