/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:37:20 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/21 18:37:14 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	cont;

	cont = 0;
	range = (int *) malloc((max - min) * sizeof(int));
	if (max <= min)
	{
		**range = '\0';
		return (0);
	}
	else
	{
		
		
	}

	return (max - min);
}

int	main(void)
{
	int	*var;
	int	min;
	int	max;
	int	cont;

	min = 3;
	max = 6;
	var = ft_ultimate_range('1' '2' '3', min, max);
	cont = 0;
	while (cont != (max - min))
	{
		printf("%d", var[cont]);
		printf("%s", "Hola");
		cont++;
	}
}
