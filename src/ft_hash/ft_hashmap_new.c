/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:58:32 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/28 17:32:11 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_hashmap.h"
#include <stdlib.h>

t_hashmap	ft_hashmap_new(size_t size)
{
	t_hashmap_	*map;

	map = ft_calloc(1, sizeof(t_hashmap_));
	if (!map)
		return (NULL);
	map->data = ft_calloc(size, sizeof(t_list *));
	if (!map->data)
	{
		free(map);
		return (NULL);
	}
	map->size = size;
	return (map);
}
