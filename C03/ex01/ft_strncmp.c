/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:48:34 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/15 10:18:35 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (*s1 + *s2 != 0 && (unsigned)i < n)
	{
		if (*s1 == *s2)
		{	
			s1++;
			s2++;
			i++;
		}
		else if (*s1 != *s2)
			return (*s1 - *s2);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_strncmp("HolaQuetal", "Holaquetal", 9));
	printf("%d", ft_strncmp("HolaQueTal", "HolaQueTal", 9));
	printf("%d", ft_strncmp("Apruebame Molinette", "Holaquetal", 9));
}
*/