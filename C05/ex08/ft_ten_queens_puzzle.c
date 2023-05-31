/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:22:58 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/22 21:58:39 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	*ft_init_matrix_zero(int array[10][10])
{
	int	count_x;
	int	count_y;

	count_x = 0;
	count_y = 0;
	while (count_y != 10)
	{
		while (count_x != 10)
		{
			array[count_y][count_x] = 0;
			write(1, &array[count_y][count_x], 1);
			count_x++;
		}
		count_y++;
	}
	return (*array);
}

int	*ft_ten_queens_puzzle(void)
{
	int	array[10];

	return (ft_init_matrix_zero(&array));
}

int	main(void)
{
	ft_ten_queens_puzzle();
}
