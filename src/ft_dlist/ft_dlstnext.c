/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnext.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:40:32 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/30 21:43:26 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstnext(t_dlist **lst)
{
	if (lst && *lst)
	{
		*lst = (*lst)->next;
		return (*lst);
	}
	return (NULL);
}
