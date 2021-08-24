/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcopy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:45:37 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/23 22:59:20 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_string.h"
#include <stdlib.h>

t_string	ft_strcopy(t_string dst, const t_string src)
{
	t_string_		*d;
	const t_string_	*s;

	d = (t_string_ *)dst;
	s = (const t_string_ *)src;
	free(d->data);
	d->data = (char *)ft_calloc(s->capacity, sizeof(char));
	ft_strlcpy(d->data, s->data, s->capacity);
	d->capacity = s->capacity;
	d->len = s->len;
	return (dst);
}
