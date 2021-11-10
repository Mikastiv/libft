/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrap_angle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:50:17 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/10 12:52:06 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	wrap_angle(float angle)
{
	if (angle < 0.0f)
		return (angle + 2.0f * PI_F);
	if (angle > 2.0f * PI_F)
		return (angle - 2.0f * PI_F);
	return (angle);
}
