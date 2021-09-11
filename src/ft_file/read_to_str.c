/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:25:38 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/11 18:32:56 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE (1024)
#endif

char	*read_to_str(int fd)
{
	char		buffer[BUFFER_SIZE + 1];
	ssize_t		bytes;
	t_string	content;
	char		*ret;

	content = ft_str_new(NULL);
	if (!content)
		return (NULL);
	bytes = 1;
	while (bytes > 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
		{
			ft_str_free(content);
			return (NULL);
		}
		buffer[bytes] = '\0';
		ft_str_append_cstr(content, buffer);
	}
	ret = ft_str_take(content);
	ft_str_free(content);
	return (ret);
}
