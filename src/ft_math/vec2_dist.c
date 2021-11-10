/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_dist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:56:29 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/10 16:59:19 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

float	vec2_dist(t_vec2 a, t_vec2 b)
{
	float	dist_a;
	float	dist_b;

	dist_a = b.x - a.x;
	dist_b = b.y - a.y;
	return (sqrtf(dist_a * dist_a + dist_b * dist_b));
}
