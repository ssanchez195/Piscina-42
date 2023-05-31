/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergisan <sergisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:52:08 by sergisan          #+#    #+#             */
/*   Updated: 2023/02/20 16:37:04 by sergisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_dictionary(void)
{
	int		fd;
	char	*buf;
	int		nr_bytes;

	buf = malloc(1000);
	fd = open("example_file", O_RDONLY);
	if (fd == -1)
		write(1, "Map Error\n", 11);
	else
	{
		nr_bytes = (read(fd, buf, 1000));
		close(fd);
		if (nr_bytes == 0)
			write(1, "archivo vacio \n", 15);
	}
	return (buf);
}

void	ft_split_info(char *buf)
{
	int		i;
	char	*chars;
	char	*map;

	i = 0;
	while (*buf != '\n')
	{
		chars[i] = buf[i];
		i++;
	}
	while (buf != '\0')
	{
		chars[i] = buf[i];
		i++;
	}
}

int	main(void)
{
	printf("%s",ft_dictionary());
}
