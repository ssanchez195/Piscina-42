/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:24:39 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/02 14:47:34 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 97;
	while (a < 123)
	{
		write (1, &a, 1);
		a++;
	}
}
/*
int main(void)
{
    ft_print_alphabet();
    return (0);
}
*/