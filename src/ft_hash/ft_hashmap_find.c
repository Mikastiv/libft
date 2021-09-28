/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_find.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:53:20 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/28 12:38:24 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_hashmap.h"

void	*ft_hashmap_find(t_hashmap m, const char *key)
{
	t_list		*lst;
	t_pair		*pair;

	lst = *get_buckets(m, key);
	while (lst)
	{
		pair = lst->content;
		if (ft_strcmp(key, pair->key) == 0)
			return (pair->value);
		ft_lstnext(&lst);
	}
	return (NULL);
}
