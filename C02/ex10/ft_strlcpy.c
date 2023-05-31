/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:37:49 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/13 15:41:12 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	cont;
	int	i;

	i = 0;
	cont = 0;
	while (src[cont])
		cont++;
	while ((src[i] && dest[i]) && (unsigned)i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (cont);
}
/*
int	main(void)
{
	printf("%u", ft_strlcpy("Hola", "Que tal", 6));
}
*/