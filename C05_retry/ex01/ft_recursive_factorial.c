/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:15:23 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/10/05 19:26:45 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}

/*int main(void)
{
  int nb = -2;
  printf("%d! = %d\n", nb, ft_recursive_factorial(nb));
  return 0;
}*/
