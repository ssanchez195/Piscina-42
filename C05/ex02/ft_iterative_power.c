/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:20:09 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/21 12:52:40 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	aux_number;

	aux_number = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		aux_number *= nb;
		power--;
	}
	return (aux_number);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(0, 0));
}
*/