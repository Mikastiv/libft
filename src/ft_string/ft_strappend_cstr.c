/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend_cstr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:46:12 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/23 22:58:57 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_string.h"

t_string	ft_strappend_cstr(t_string dst, const char *src)
{
	while (*src)
		ft_stradd_back(dst, *src++);
	return (dst);
}
