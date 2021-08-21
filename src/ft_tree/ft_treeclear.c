/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treeclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 01:38:28 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/21 02:08:21 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_treeclear(t_tree **tree, void (*del)(void *))
{
	if (tree && *tree)
	{
		if ((*tree)->left)
			ft_treeclear(&(*tree)->left, del);
		if ((*tree)->right)
			ft_treeclear(&(*tree)->right, del);
		del((*tree)->content);
		free(*tree);
		*tree = NULL;
	}
}
