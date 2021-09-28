/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_buckets.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:32:46 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/28 12:39:56 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_hashmap.h"

t_list	**get_buckets(t_hashmap m, const char *key)
{
	t_hashmap_	*map;
	size_t		index;
	t_list		**ptr;

	map = m;
	index = ft_hash(key, ft_strlen(key)) % map->size;
	ptr = map->data;
	return (&ptr[index]);
}
