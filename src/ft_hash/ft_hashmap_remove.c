/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_remove.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:30:32 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/28 18:27:56 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_hashmap.h"
#include <stdlib.h>

static void	remove_elem(t_hashmap map, t_list *elem)
{
	t_hashmap_	*m;
	t_pair		*pair;

	m = map;
	pair = elem->content;
	delete_pair(pair, m->del);
	free(elem);
}

bool	ft_hashmap_remove(t_hashmap map, const char *key)
{
	t_list		**buckets;
	t_list		*tmp;
	t_list		*lst;
	t_pair		*pair;

	buckets = get_hash_buckets(map, key);
	lst = *buckets;
	tmp = NULL;
	while (lst)
	{
		pair = lst->content;
		if (ft_strcmp(key, pair->key) == 0)
		{
			if (tmp)
				tmp->next = lst->next;
			else
				*buckets = lst->next;
			remove_elem(map, lst);
			return (true);
		}
		tmp = lst;
		ft_lstnext(&lst);
	}
	return (false);
}
