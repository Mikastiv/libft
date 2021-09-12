/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:05:29 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/11 20:54:40 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE (1024)
#endif

ssize_t	count_lines(const char *file)
{
	char	buf[BUFFER_SIZE + 1];
	ssize_t	bytes;
	ssize_t	count;
	char	*newline;
	int		fd;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (-1);
	count = 0;
	bytes = BUFFER_SIZE;
	while (bytes == BUFFER_SIZE)
	{
		bytes = read(fd, &buf, BUFFER_SIZE);
		if (bytes < 0)
			close(fd);
		if (bytes < 0)
			return (-1);
		buf[bytes] = 0;
		newline = ft_strchr(buf, '\n');
		while (newline && ++count)
			newline = ft_strchr(newline + 1, '\n');
	}
	close(fd);
	return (count + 1);
}
