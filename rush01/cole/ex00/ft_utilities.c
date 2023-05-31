/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egencho <egencho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 20:58:38 by egencho           #+#    #+#             */
/*   Updated: 2023/02/12 21:58:17 by egencho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
			i++;
		else
			return (1);
	}
	return (0);
}

char	*ft_strcpy(char *cut_string, char *str)
{
	int	pos;
	int	poscut_string;

	pos = 0;
	poscut_string = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 48 && str[pos] <= 57)
		{
			cut_string[poscut_string] = str[pos];
			poscut_string++;
		}
		pos++;
	}
	cut_string[poscut_string] = '\0';
	return (cut_string);
}

int	*ft_strcpy_to_int(int *input, char *cut_string)
{
	int	pos;
	int	translate;

	pos = 0;
	while (cut_string[pos] != '\0')
	{
		translate = cut_string[pos] - '0';
		input[pos] = translate;
		pos++;
	}
	return (input);
}
