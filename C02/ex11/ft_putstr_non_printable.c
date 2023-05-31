/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:58:59 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/13 15:40:40 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_aux_convert(char *a)
{
	char	div;
	char	mod;
	char	aux;

	div = *a / 16 + 48;
	mod = *a % 16;
	if (mod <= 9)
	{
		write(1, "\\", 1);
		write(1, &div, 1);
		aux = mod + 48;
		ft_putchar(aux);
	}
	else if (mod > 9 && mod < 16)
	{
		write(1, "\\", 1);
		write(1, &div, 1);
		aux = mod + 87;
		ft_putchar(aux);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str < 32)
			ft_aux_convert(str);
		else
			write(1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char	*str;
	str = "Hol*aquet*alCoucou\ntu v*as bien ?";

	ft_putstr_non_printable(str);
}
*/