/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egencho <egencho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:38:58 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/12 22:04:09 by egencho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_argm(int	*input);
int		ft_check_corner(int	*input);
int		ft_str_is_numeric(char *str);
int		*ft_strcpy_to_int(int *input, char *cut_string);
char	*ft_strcpy(char *cut_string, char *str);
void	ft_putchar(char c);

void	ft_print_matrix_zero(int array[4][4])
{
	int	count_x;
	int	count_y;

	count_x = 0;
	count_y = 0;
	while (count_x < 4 && count_y <= 4)
	{
		while (count_y != 4)
		{
			array[count_x][count_y] = 48;
			write(1, &array[count_x][count_y], 1);
			write(1, " ", 1);
			count_y++;
		}
		count_y = 0;
		count_x++;
		if (count_x != 4)
			write(1, "\n", 1);
	}
}

void	ft_input_four(int input[16], int array[4][4])
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (i++ <= '7')
	{
		if ((input[i] == '4' && i < 4) && j <= 4)
		{
			array[i][j] = j + 1;
			j++;
		}
		if ((input[i] == '4' && i >= 4))
		{
			array[i][j - 1] = j;
			j--;
		}
	}
}

int	main(int argc, char *str[])
{
	char	cut_string[17];
	int		input[16];
	int		array[4][4];

	argc = 0;
	ft_strcpy(cut_string, str[1]);
	if (ft_str_is_numeric(cut_string) == 1)
	{
		write (1, "Error\n", 10);
		return (0);
	}
	ft_strcpy_to_int(input, cut_string);
	if (ft_check_argm(input) == 1)
	{
		write (1, "Error\n", 10);
		return (0);
	}
	if (ft_check_corner(input) == 1)
	{
		write (1, "Error\n", 10);
		return (0);
	}
	ft_print_matrix_zero(array);
	ft_input_four(input, array);
	return (0);
}

/*	if (argc != 2)
	{
		write (1, "Error\n", 10);
		return (0);
	}*/