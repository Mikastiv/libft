/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_hash_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:59:04 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/28 18:00:02 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_hashmap.h"

size_t	get_hash_index(t_hashmap m, const char *key)
{
	t_hashmap_	*map;

	map = m;
	return (ft_hash(key, ft_strlen(key)) % map->size);
}
