/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_remove.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:30:32 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/28 12:49:55 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_hashmap.h"
#include <stdlib.h>

bool	ft_hashmap_remove(t_hashmap m, const char *key, void (*del)(void *))
{
	t_list	**ptr;
	t_list	*tmp;
	t_list	*lst;
	t_pair	*pair;

	ptr = get_buckets(m, key);
	lst = *ptr;
	tmp = NULL;
	while (lst)
	{
		pair = lst->content;
		if (ft_strcmp(key, pair->key) == 0)
		{
			if (tmp)
				tmp->next = lst->next;
			else
				*ptr = lst->next;
			delete_pair(pair, del);
			free(lst);
			return (true);
		}
		tmp = lst;
		ft_lstnext(&lst);
	}
	return (false);
}
