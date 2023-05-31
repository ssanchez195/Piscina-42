/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:37:14 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/05 10:41:34 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_org(char _a[], int _x, int _n)
{
	int	count;

	count = _x - 2;
	if (_n == 1)
	{
		write(1, "\n", 1);
	}
	ft_putchar(_a[0]);
	while (count > 0)
	{
		ft_putchar(_a[1]);
		count--;
	}
	if (_x > 1)
		ft_putchar(_a[2]);
	count = _x - 2;
}

void	rush(int x, int y)
{
	int	jump_line;

	jump_line = 0;
	if (y > 1)
		jump_line = 1;
	if (x > 0 && y > 0)
	{
		print_org("/*\\", x, 0);
		if (y > 2)
		{
			while ((y - 2) > 0)
			{
				print_org("* *", x, 1);
				y--;
			}
		}
		if (jump_line != 0)
		{
			print_org("\\*/", x, 1);
			jump_line = 0;
		}
	}
	else
		write(1, "Buen intento, máquina", 22);
}
