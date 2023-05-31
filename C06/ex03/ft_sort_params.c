/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:44:10 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/20 17:17:03 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		str++;
	}
}

int	ft_strcmp_params(char *s1, char *s2)
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

int	main(int argc, char *argv[])
{
	int		j;
	char	*temp;

	j = 1;
	while (j != (argc - 1) && argc != 1)
	{
		if (ft_strcmp_params(argv[j], argv[j + 1]) > 0)
		{
			temp = argv[j];
			argv[j] = argv[j + 1];
			argv[j + 1] = temp;
			j = 0;
		}
		j++;
	}
	j = 1;
	while (j != (argc))
	{
		ft_putstr(argv[j]);
		write(1, "\n", 1);
		j++;
	}
}
