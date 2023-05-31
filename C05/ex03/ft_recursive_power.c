/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:34:03 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/23 11:32:40 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_power(-4, 3));
}
*/