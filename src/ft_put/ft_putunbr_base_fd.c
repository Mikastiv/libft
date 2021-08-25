/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:53:27 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/25 00:06:50 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr_recursive(unsigned long long n, const char *base,
				unsigned long long radix, int fd)
{
	if (n / radix != 0)
		putnbr_recursive(n / radix, base, radix, fd);
	ft_putchar_fd(base[n % radix], fd);
}

void	ft_putunbr_base_fd(unsigned long long n, const char *base, int fd)
{
	putnbr_recursive(n, base, (unsigned long long)ft_strlen(base), fd);
}
