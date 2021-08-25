/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:24:17 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/25 00:18:58 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_string.h"

t_string	ft_strclear(t_string str)
{
	t_string_	*s;

	s = (t_string_ *)str;
	ft_bzero(s->data, s->capacity);
	s->len = 0;
	return (str);
}
