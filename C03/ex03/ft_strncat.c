/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:01:17 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/15 10:23:02 by sergisan         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	dest += j;
	while (*src != 0 && (unsigned)i < nb)
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
	char array[200] = "Apruebame ";
	printf("%s", ft_strncat(array, "Molinette", 9));
}
*/