/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:21:38 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/15 10:14:48 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 + *s2 != 0)
	{
		if (*s1 == *s2)
		{	
			s1++;
			s2++;
		}
		else if (*s1 != *s2)
			return (*s1 - *s2);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_strcmp("HolaQueTal", "HolaQueTal"));
	printf("%d", ft_strcmp("HolaQueTal123", "HolaQueTala"));
	printf("%d", ft_strcmp("HolaQueTala", "HolaQueTal123"));
	printf("%d", ft_strcmp("Hola", "Hol"));
}
*/