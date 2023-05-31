/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:43:37 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/23 11:12:32 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_check_characters(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i] && base[j])
	{
		while (base[i] != base[j] && base[j])
			j++;
		if (base[i] == base[j])
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_args(char *base)
{
	int	boolean_arg;
	int	i;

	boolean_arg = 0;
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			boolean_arg = 1;
		i++;
	}
	if (ft_check_characters(base) == 1)
		boolean_arg = 1;
	return (boolean_arg);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	if ((i != 0 && i != 1) && nbr == -2147483648 && ft_check_args(base) != 1)
	{
		write(1, "-", 1);
		ft_putnbr_base(-(nbr / i), base);
		ft_putnbr_base(-(nbr % i), base);
	}
	else if (nbr < 0 && i != 0 && i != 1 && ft_check_args(base) != 1)
	{
		write(1, "-", 1);
		ft_putnbr_base(-nbr, base);
	}
	else if (nbr >= i && i != 0 && i != 1 && ft_check_args(base) != 1)
	{
		ft_putnbr_base(nbr / i, base);
		ft_putnbr_base(nbr % i, base);
	}
	else if (i != 0 && i != 1 && ft_check_args(base) != 1)
		ft_putchar(base[nbr]);
}
/*
int	main(void)
{
	ft_putnbr_base(-2147483647, "0123456789");
}
*/