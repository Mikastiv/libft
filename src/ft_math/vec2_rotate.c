/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:52:24 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/10 13:01:22 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

t_vec2	vec2_rotate(t_vec2 v, float angle)
{
	float	len;

	len = vec2_length(v);
	return ((t_vec2){.x = cosf(angle) * len, .y = sinf(angle) * len});
}
