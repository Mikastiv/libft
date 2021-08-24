/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treenew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 01:31:21 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/21 01:35:10 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tree	*ft_treenew(void *content)
{
	t_tree	*node;

	node = (t_tree *)ft_calloc(1, sizeof(t_tree));
	if (!node)
		return (NULL);
	node->content = content;
	return (node);
}
