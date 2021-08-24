/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strduplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:11:55 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/24 14:14:59 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_string.h"

t_string	ft_strduplicate(const t_string str)
{
	t_string_	*dup;

	dup = ft_strnew(NULL);
	if (!dup)
		return (NULL);
	ft_strcopy(dup, str);
	return (dup);
}
