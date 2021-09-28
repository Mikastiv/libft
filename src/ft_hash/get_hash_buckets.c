/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_hash_buckets.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:32:46 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/28 18:00:39 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_hashmap.h"

t_list	**get_hash_buckets(t_hashmap m, const char *key)
{
	t_hashmap_	*map;
	size_t		index;

	index = get_hash_index(m, key);
	map = m;
	return (&map->data[index]);
}
