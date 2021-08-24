/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:25:36 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/23 22:59:06 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_string.h"

t_string	ft_strappend(t_string dst, const t_string src)
{
	const t_string_	*s;
	size_t			i;

	s = (const t_string_ *)src;
	i = 0;
	while (i < s->len)
	{
		ft_stradd_back(dst, s->data[i]);
		++i;
	}
	return (dst);
}
