/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:01:22 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/24 23:51:00 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_string.h"
#include <stdlib.h>

static void	grow_buffer(t_string_ *str)
{
	char		*buf;
	size_t		newsize;

	newsize = (size_t)((str->capacity + 1) * 1.5);
	buf = ft_calloc(newsize, sizeof(char));
	if (str->data)
	{
		ft_strlcpy(buf, str->data, newsize);
		free(str->data);
	}
	str->data = buf;
	str->len = ft_strnlen(buf, newsize);
	str->capacity = newsize;
}

t_string	ft_stradd_back(t_string str, char c)
{
	t_string_	*s;

	s = (t_string_ *)str;
	if (s->len >= s->capacity - 1)
		grow_buffer(s);
	s->data[s->len++] = c;
	return (str);
}
