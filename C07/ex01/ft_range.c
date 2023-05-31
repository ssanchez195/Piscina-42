/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:58:51 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/21 15:42:41 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*int_array;
	int	i;
//Se debe devolver NULL asi?
	if (max <= min)
		return (NULL);
	int_array = (int *) malloc((max - min) * sizeof(int));
	i = 0;
	while (min != max)
	{
		int_array[i] = min;
		i++;
		min++;
	}
	return (int_array);
}

int	main(void)
{
	int	*var;
	int	min;
	int	max;
	int	cont;

	min = 3;
	max = 6;
	var = ft_range(min, max);
	cont = 0;
	while (cont != (max - min))
	{
		printf("%d", var[cont]);
		printf("%s", "Hola");
		cont++;
	}
}
