/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:04:45 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/18 16:10:24 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstpop_front(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		free(*lst);
		*lst = tmp;
	}
}
