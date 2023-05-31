/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:42:04 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/18 15:05:37 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	aux_factorial;

	aux_factorial = nb;
	if (nb == 0 || nb == 1)
		return (1);
	while (nb != 1)
	{
		aux_factorial *= nb - 1;
		nb--;
	}
	return (aux_factorial);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}
*/