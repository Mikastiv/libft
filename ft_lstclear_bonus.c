/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 11:49:46 by mleblanc          #+#    #+#             */
/*   Updated: 2021/05/07 13:19:46 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (*lst)
	{
		tmp = ft_lstlast(*lst);
		while (*lst != tmp)
		{
			ft_lstdelone(tmp, del);
			tmp = ft_lstlast(*lst);
		}
		ft_lstdelone(*lst, del);
		*lst = NULL;
	}
}
