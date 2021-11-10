/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_normalize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:42:53 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/10 14:42:07 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec2	vec2_normalize(t_vec2 v)
{
	float	len;

	len = vec2_length(v);
	if (len == 0.0f)
		return ((t_vec2){0.0f, 0.0f});
	v.x = v.x / len;
	v.y = v.y / len;
	return (v);
}
