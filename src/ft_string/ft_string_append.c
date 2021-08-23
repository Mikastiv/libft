/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_append.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:25:36 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/23 19:38:30 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_string	*ft_string_append(t_string *dst, const t_string *src)
{
	size_t	i;

	i = 0;
	while (i < src->len)
	{
		ft_string_add_back(dst, src->data[i]);
		++i;
	}
	return (dst);
}
