/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ntoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:39:26 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/06 01:07:48 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ntoa_base(char *b, t_i64 n, size_t len, const char *base)
{
	t_i64	base_len;
	t_i64	i;

	base_len = (t_i64)ft_strlen(base);
	if (n < 0)
		*b++ = '-';
	while (len > 0)
	{
		i = n % base_len;
		if (i < 0)
			i *= -1;
		b[--len] = base[i];
		n /= base_len;
	}
}
