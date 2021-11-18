/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clamp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:53:10 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/18 10:54:57 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int32_t	ft_clamp(int32_t v, int32_t min, int32_t max)
{
	if (v < min)
		return (min);
	if (v > max)
		return (max);
	return (v);
}
