/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:24:17 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/23 15:37:22 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_string.h"

t_string	ft_str_clear(t_string str)
{
	t_string_	*s;

	s = (t_string_ *)str;
	s->data[0] = '\0';
	s->len = 0;
	return (str);
}
