/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:51:30 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/15 18:05:23 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_atoi(char *str)
{
	int	boolean_negative;
	int	save_ints;
	int	bool_finished;

	bool_finished = 1;
	boolean_negative = 1;
	save_ints = 0;
	while (*str != '\0' && bool_finished == 1)
	{
		boolean_negative *= ft_pos_or_neg(str);
		if ((str[0] < 58 && str[0] > 47) && (str[1] < 58 && str[1] > 47))
		{
			save_ints *= 10;
			save_ints += (*str - 48);
		}
		if ((str[1] >= 58 || str[1] <= 47) && save_ints != 0)
		{
			bool_finished = 0;
			save_ints *= 10;
			save_ints += (*str - 48);
		}
		str++;
	}
	return (save_ints * boolean_negative);
}

int	ft_check_characters(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i] && base[j])
	{
		while (base[i] != base[j])
		{
			j++;
		}
		if (base[i] == base[j])
			return (1);
		i++;
	}
	return (0);
}

int	ft_check(char *base)
{
	int	boolean_arg;
	int	i;

	boolean_arg = 0;
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			boolean_arg = 1;
		i++;
	}
	if (ft_check_characters(base) == 1)
		boolean_arg = 1;
	return (boolean_arg);
}

int	ft_atoi_base(char *str, char *base)
{
	int	atoi_conv;
	int	i;

	i = 0;
	atoi_conv = ft_atoi(str);
	while (base[i])
		i++;
	if ((i > 1) && atoi_conv == -2147483648 && ft_check(base) != 1)
	{
		write(1, "-", 1);
		ft_atoi(atoi_conv / -i, base);
		ft_atoi(atoi_conv % -i, base);
	}
	else if (atoi_conv < 0 && i > 1 && ft_check(base) != 1)
	{
		write(1, "-", 1);
		ft_atoi(-atoi_conv, base);
	}
	else if (atoi_conv >= i && i > 1 && ft_check(base) != 1)
	{
		ft_atoi(atoi_conv / i, base);
		ft_atoi(atoi_conv % i, base);
	}
	else if (i > 1 && ft_check(base) != 1)
		ft_putchar(base[atoi_conv]);
}
/*
int	main(void)
{
	printf("%d", ft_atoi_base("  ---12312asdasd123", "ponytail"));
}
*/