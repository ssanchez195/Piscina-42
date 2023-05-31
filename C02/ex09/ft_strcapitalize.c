/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:32:24 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/13 20:55:32 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_alphanum(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	else if (str >= 'A' && str <= 'Z')
		return (1);
	else if (str >= '0' && str <= '9')
		return (1);
	else
		return (0);
}

void	ft_str_up_case(char *str)
{
	if (*str < 123 && *str > 96)
		*str -= 32;
}

void	ft_str_low_case(char *str)
{
	if (*str < 91 && *str > 64)
		*str += 32;
}

char	*ft_strcapitalize(char *str)
{
	int	first_letter;
	int	cont;

	first_letter = 1;
	cont = 0;
	if (*str >= 'a' && *str <= 'z')
		ft_str_up_case(str);
	while (*str)
	{
		if (ft_str_alphanum(*str) == 1)
		{
			if (first_letter == 1)
			{
				ft_str_up_case(str);
				first_letter = 0;
			}
			else
				ft_str_low_case(str);
		}
		else
			first_letter = 1;
		str++;
		cont++;
	}
	return (str - cont);
}

/*
int	main(void)
{
	char str[] = "asdasd -asd 42asf +asdAaf Asfioj";

	printf("%s\n", ft_strcapitalize(str));
}
*/