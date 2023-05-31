/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:04:50 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/09 11:17:59 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;

	aux = 0;
	while (aux < (size / 2))
	{
		ft_swap(&tab[aux], &tab[size - aux - 1]);
		aux++;
	}
}

int	main(void)
{
	int	arr[7];

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	arr[5] = 6;
	arr[6] = 9;
	printf("Esto es el resultado: \n %d", arr[0]);
	ft_rev_int_tab(arr, 7);
	printf("\n");
	printf("Esto es el resultado: \n %d \n", arr[0]);
	printf("Esto es el otro resultado: \n %d \n", arr[1]);
	printf("Y este es el ultimo resultado \n %d \n", arr[6]);
}
