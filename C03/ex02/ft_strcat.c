/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:56:21 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/15 10:23:07 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	dest += j;
	while (*src != 0)
	{
		*dest = *src;
		i++;
		dest++;
		src++;
	}
	*dest = 0;
	dest = dest - i - j;
	return (dest);
}
/*
int	main(void)
{
	char array[200] = "Hola";
	printf("%s", ft_strcat(array, " Que Tal"));
}
*/