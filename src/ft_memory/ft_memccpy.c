/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:57:51 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/06 19:57:12 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, t_i8 c, size_t n)
{
	t_i8		*d;
	const t_i8	*s;

	d = dst;
	s = src;
	while (n-- > 0)
	{
		*d = *s++;
		if (*d++ == c)
			return (d);
	}
	return (NULL);
}
