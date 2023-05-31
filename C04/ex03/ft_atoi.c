/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:39:03 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/23 11:28:50 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	cont;
	int	save_ints;
	int	save_neg;

	cont = 0;
	save_ints = 0;
	save_neg = 1;
	while (str[cont] == 32 || (str[cont] >= 9 && str[cont] <= 13))
		cont++;
	while (str[cont] == '-' || str[cont] == '+')
	{
		if (str[cont] == '-')
			save_neg *= -1;
		cont++;
	}
	while (str[cont] >= 48 && str[cont] <= 57)
	{
		save_ints = save_ints * 10 + (str[cont] - 48);
		cont++;
	}
	return (save_ints * save_neg);
}

int	main(void)
{
	printf("%d", ft_atoi(" 	 	  -----16542a,32?1[0}2asd"));
}
