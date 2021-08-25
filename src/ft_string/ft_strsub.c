/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:30:32 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/24 21:32:53 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_string.h"

t_string	ft_strsub(t_string str, unsigned int index, size_t len)
{
	t_string_	*s;
	t_string_	*sub;

	s = (t_string_ *)str;
	sub = ft_strnew(ft_substr(s->data, index, len));
	return ((t_string)sub);
}
