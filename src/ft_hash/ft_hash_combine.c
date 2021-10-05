/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_combine.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:39:13 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/05 00:55:41 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_hash_combine(size_t *seed, char byte)
{
	*seed ^= (unsigned int)byte + 0x9E3779B9 + (*seed << 6) + (*seed >> 2);
}
