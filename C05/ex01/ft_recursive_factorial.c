/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:57:04 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/18 15:05:50 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		return (nb *= ft_recursive_factorial(nb - 1));
	else if (nb >= 0)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(32));
}
*/