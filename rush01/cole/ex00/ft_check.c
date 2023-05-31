/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egencho <egencho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:43:27 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/12 21:58:24 by egencho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_argm(int	*input)
{
	if ((input[0] + input[4]) < 3 || (input[0] + input[4] > 5))
		return (1);
	if ((input[1] + input[5]) < 3 || (input[1] + input[5] > 5))
		return (1);
	if ((input[2] + input[6]) < 3 || (input[2] + input[6] > 5))
		return (1);
	if ((input[3] + input[7]) < 3 || (input[3] + input[7] > 5))
		return (1);
	if ((input[8] + input[12]) < 3 || (input[8] + input[12] > 5))
		return (1);
	if ((input[9] + input[13]) < 3 || (input[9] + input[13] > 5))
		return (1);
	if ((input[10] + input[14]) < 3 || (input[10] + input[14] > 5))
		return (1);
	if ((input[11] + input[15]) < 3 || (input[11] + input[15] > 5))
		return (1);
	return (0);
}

int	ft_check_corner(int	*input)
{
	if (input[0] == 1)
		if (input[0] != input[7])
			return (1);
	if (input[3] == 1)
		if (input[3] != input[12])
			return (1);
	if (input[4] == 1)
		if (input[4] != input[11])
			return (1);
	if (input[7] == 1)
		if (input[7] != input[15])
			return (1);
	return (0);
}
