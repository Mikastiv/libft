/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrap_angle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:50:17 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/11 12:40:47 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	wrap_angle(double angle)
{
	if (angle < 0.0)
		return (angle + 2.0 * PI);
	if (angle > 2.0 * PI)
		return (angle - 2.0 * PI);
	return (angle);
}
