/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:30:47 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/30 16:39:38 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstadd_front(t_dlist **lst, t_dlist *new)
{
	t_dlist	*first;

	if (lst)
	{
		if (*lst && new)
		{
			first = ft_dlstfirst(*lst);
			new->next = first;
			new->prev = NULL;
			first->prev = new;
		}
		*lst = new;
	}
}
