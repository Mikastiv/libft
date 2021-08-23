/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_cpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:45:37 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/23 17:48:41 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_string	*ft_string_cpy(t_string *dst, const t_string *src)
{
	free(dst->data);
	dst->data = (char *)ft_calloc(src->capacity, sizeof(char));
	ft_strlcpy(dst->data, src->data, src->capacity);
	dst->capacity = src->capacity;
	dst->len = src->len;
	return (dst);
}
