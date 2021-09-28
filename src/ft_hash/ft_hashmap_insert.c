/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_insert.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:18:10 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/28 12:54:29 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_hashmap.h"
#include <stdlib.h>

bool	ft_hashmap_insert(t_hashmap m, const char *key, void *value)
{
	t_list		**ptr;
	t_list		*new;
	t_pair		*pair;

	pair = ft_calloc(1, sizeof(t_pair));
	if (!pair)
		return (false);
	pair->key = ft_strdup(key);
	if (!pair->key)
	{
		free(pair);
		return (false);
	}
	pair->value = value;
	new = ft_lstnew(pair);
	if (!new)
	{
		free(pair->key);
		free(pair);
		return (false);
	}
	ptr = get_buckets(m, key);
	ft_lstadd_back(ptr, new);
	return (true);
}
