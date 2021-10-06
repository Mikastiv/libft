/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 21:31:10 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/06 02:18:57 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(t_i64 n, int fd)
{
	if (n < 0 && n / 10 == 0)
		ft_putchar_fd('-', fd);
	if (n / 10 != 0)
		ft_putnbr_fd(n / 10, fd);
	if (n < 0)
		ft_putchar_fd((n % 10) * -1 + '0', fd);
	else
		ft_putchar_fd(n % 10 + '0', fd);
}
