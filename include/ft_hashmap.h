/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:06:32 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/28 17:59:17 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HASHMAP_H
# define FT_HASHMAP_H

# include "../libft.h"

typedef struct s_hashmap_
{
	t_list	**data;
	size_t	size;
}	t_hashmap_;

typedef struct s_pair
{
	char	*key;
	void	*value;
}	t_pair;

t_list	**get_hash_buckets(t_hashmap m, const char *key);
size_t	get_hash_index(t_hashmap m, const char *key);
void	delete_pair(void *pair, void (*del)(void *));

#endif
