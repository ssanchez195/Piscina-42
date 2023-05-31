/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:51:36 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/06 18:08:10 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_aux_else(int *diglist, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &diglist[i], 1);
		i++;
	}
	if ((diglist[0] + '0') != ('9' - n + '1'))
		write(1, ", ", 2);
}

void	ft_while_or_write(int n, int count_line, int num_line, int diglist[10])
{
	int	i;

	i = 0;
	if (count_line < n)
	{
		count_line++;
		num_line++;
		while (diglist[count_line - 1] <= '9')
		{
			diglist[count_line] = diglist[count_line - 1] + 1;
			ft_while_or_write(n, count_line, num_line, diglist);
			diglist[count_line - 1] = diglist[count_line - 1] + 1;
		}
		num_line--;
	}
	else
		ft_aux_else(diglist, n);
}

void	ft_print_combn(int n)
{
	int	count_line;
	int	num_line;
	int	diglist[10];

	count_line = 0;
	num_line = 0;
	diglist[0] = '0';
	ft_while_or_write(n, count_line, num_line, diglist);
}
/*
int	main(void)
{
	ft_print_combn(5);
}
*/