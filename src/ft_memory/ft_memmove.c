/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:27:44 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/08 13:36:20 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	t_i8		*d;
	const t_i8	*s;

	d = dst;
	s = src;
	if (d < s)
		while (len-- > 0)
			*d++ = *s++;
	else
	{
		d = d + (len - 1);
		s = s + (len - 1);
		while (len-- > 0)
			*d-- = *s--;
	}
	return (dst);
}
