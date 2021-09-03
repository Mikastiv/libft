/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnext.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:38:59 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/30 21:42:37 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnext(t_list **lst)
{
	if (lst && *lst)
	{
		*lst = (*lst)->next;
		return (*lst);
	}
	return (NULL);
}
