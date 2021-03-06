/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreenew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 01:31:21 by mleblanc          #+#    #+#             */
/*   Updated: 2021/12/01 07:17:12 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree	*ft_btreenew(void *content)
{
	t_btree	*node;

	node = ft_calloc(1, sizeof(t_btree));
	if (!node)
		return (NULL);
	node->content = content;
	return (node);
}
