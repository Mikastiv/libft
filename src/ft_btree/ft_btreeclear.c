/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreeclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 01:38:28 by mleblanc          #+#    #+#             */
/*   Updated: 2021/12/01 07:17:06 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_btreeclear(t_btree **tree, void (*del)(void *))
{
	if (*tree)
	{
		if ((*tree)->left)
			ft_btreeclear(&(*tree)->left, del);
		if ((*tree)->right)
			ft_btreeclear(&(*tree)->right, del);
		del((*tree)->content);
		free(*tree);
		*tree = NULL;
	}
}
