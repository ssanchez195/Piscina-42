/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:22:42 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/07 16:29:08 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
		i++;
	}
	str = str - i;
	return (str);
}

/*
int	main(void)
{
	char str[] = "asdasdfewfeqwddDSAADS";
	printf("%s\n", ft_strlowcase(str));
}
*/