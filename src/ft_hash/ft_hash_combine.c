/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_combine.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:39:13 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/06 21:04:43 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_hash_combine(size_t *seed, t_i8 byte)
{
	*seed ^= (t_u32)byte + 0x9E3779B9 + (*seed << 6) + (*seed >> 2);
}
