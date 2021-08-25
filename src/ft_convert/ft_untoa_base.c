/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_untoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 22:52:55 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/25 00:05:36 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_untoa_base(char *b, unsigned long long n, size_t len,
			const char *base)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	while (len > 0)
	{
		b[--len] = base[n % base_len];
		n /= base_len;
	}
}
