/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:36:37 by mleblanc          #+#    #+#             */
/*   Updated: 2021/05/04 14:47:32 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*start;

	start = (unsigned char *)s;
	while (n-- > 0)
		*start++ = (unsigned char)c;
	return (s);
}
