/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:00:03 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/09 10:45:08 by sergisan         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size && size != 1)
	{
		if (*(tab + i) > *(tab + i + 1))
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = -1;
		}
		i++;
	}
}

/*
int	main(void)
{
	int	arr[5];

	arr[0] = 4;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 5;
	arr[4] = 1;
	printf("Empezamos el recorrido \n");
	ft_sort_int_tab(arr, 5);
	printf("Este es el primer valor: \n %d \n", arr[0]);
	printf("Este es el segundo valor: \n %d \n", arr[1]);
	printf("Este es el tercer valor: \n %d \n", arr[2]);
	printf("Este es el cuarto valor: \n %d \n", arr[3]);
	printf("Este es el ultimo valor: \n %d \n", arr[4]);
}
*/