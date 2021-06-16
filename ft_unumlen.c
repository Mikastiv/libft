/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unumlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:22:31 by mleblanc          #+#    #+#             */
/*   Updated: 2021/06/15 20:25:42 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_unumlen(unsigned long long n, unsigned long long radix)
{
	size_t	len;

	len = 0;
	while (n / radix != 0)
	{
		n /= radix;
		++len;
	}
	return (len + 1);
}
