/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 20:10:18 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/08 13:36:13 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_i32	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const t_i8	*ptr1;
	const t_i8	*ptr2;

	ptr1 = s1;
	ptr2 = s2;
	while (n-- > 0)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		++ptr1;
		++ptr2;
	}
	return (0);
}
