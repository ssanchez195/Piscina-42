/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:44:38 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/15 13:22:24 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//La funcion da el doble que la que me da a mi, arreglar
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size < 1)
		return (i);
	while (dest[i])
		i++;
	while (src[j] && j < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}

int	main(void)
{
	char	dest[80] = "Por fabó";
	char	*src = "ApruebameMolinette";
	printf("%d", ft_strlcat(dest, src, 2));
	printf("\n");

	printf("%lu", strlcat(dest, src, 2));
}
