/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:53:27 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/06 01:20:23 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr_recursive(t_u64 n, const char *base, t_u64 radix, int fd)
{
	if (n / radix != 0)
		putnbr_recursive(n / radix, base, radix, fd);
	ft_putchar_fd(base[n % radix], fd);
}

void	ft_putunbr_base_fd(t_u64 n, const char *base, int fd)
{
	putnbr_recursive(n, base, (t_u64)ft_strlen(base), fd);
}
