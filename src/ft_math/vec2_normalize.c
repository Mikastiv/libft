/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_normalize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:42:53 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/11 12:41:00 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec2	vec2_normalize(t_vec2 v)
{
	double	len;

	len = vec2_length(v);
	if (len == 0.0)
		return ((t_vec2){0.0, 0.0});
	v.x = v.x / len;
	v.y = v.y / len;
	return (v);
}
