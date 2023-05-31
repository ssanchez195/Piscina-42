/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:18:50 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/18 15:06:19 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	number;

	number = 1;
	while ((number * number) < nb && number < 46341)
	{
		number ++;
	}
	if ((number) * (number) == nb)
		return (number);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(2147395600));
}
*/