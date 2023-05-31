/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:22:27 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/23 11:32:22 by sergisan         ###   ########.fr       */
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
			return (nb);
		else
			return (0);
	}
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) != 0 && nb < 2147483647 && nb != 0)
	{
		ft_is_prime(nb);
		nb++;
	}
	return (nb);
}

/*
int	main(void)
{
	printf("%d\n", ft_find_next_prime(2147483647));
	printf("%d\n", ft_find_next_prime(14));
	printf("%d\n", ft_find_next_prime(3000));
	printf("%d\n", ft_find_next_prime(3007));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(6));
	printf("%d\n", ft_find_next_prime(7));
}
*/