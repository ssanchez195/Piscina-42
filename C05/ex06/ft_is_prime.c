/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:55:07 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/23 11:32:54 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	aux_number;

	aux_number = 2;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else
	{
		while (nb % aux_number != 0 && aux_number <= (nb / aux_number))
			aux_number++;
		if ((nb % aux_number) == 0)
			return (0);
		else
			return (1);
	}
}
/* 
int	main(void)
{
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(-10));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(2147483647));
	printf("%d", ft_is_prime(2147483645));
}
 */