/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:14:11 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/28 17:05:06 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_hashmap.h"
#include <stdlib.h>

void	ft_hashmap_free(t_hashmap m, void (*del)(void *))
{
	t_hashmap_	*map;
	size_t		i;
	t_list		*lst;
	t_list		*tmp;

	map = m;
	i = 0;
	while (i < map->size)
	{
		lst = map->data[i];
		while (lst)
		{
			tmp = lst->next;
			delete_pair(lst->content, del);
			free(lst);
			lst = tmp;
		}
		++i;
	}
	free(map->data);
	free(map);
}
