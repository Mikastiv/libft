/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:46:47 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/06 01:20:02 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr_recursive(t_i64 n, const char *base, int radix, int fd)
{
	t_i64	index;

	if (n < 0 && n / radix == 0)
		ft_putchar_fd('-', fd);
	if (n / radix != 0)
		putnbr_recursive(n / radix, base, radix, fd);
	if (n < 0)
	{
		index = (n % radix) * -1;
		ft_putchar_fd(base[index], fd);
	}
	else
		ft_putchar_fd(base[n % radix], fd);
}

void	ft_putnbr_base_fd(t_i64 n, const char *base, int fd)
{
	putnbr_recursive(n, base, (int)ft_strlen(base), fd);
}
