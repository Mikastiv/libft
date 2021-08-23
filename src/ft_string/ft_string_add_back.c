/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_add_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:01:22 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/23 17:44:55 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	grow_buffer(t_string *str)
{
	char	*buf;
	size_t	newsize;

	newsize = (size_t)((str->capacity + 2) * 1.5);
	buf = (char *)ft_calloc(newsize, sizeof(char));
	if (str->data)
	{
		ft_strlcpy(buf, str->data, newsize);
		free(str->data);
	}
	str->data = buf;
	str->len = ft_strnlen(buf, newsize);
	str->capacity = newsize;
}

t_string	*ft_string_add_back(t_string *str, char c)
{
	if (str->len >= str->capacity || str->len >= str->capacity - 1)
		grow_buffer(str);
	str->data[str->len++] = c;
	return (str);
}
