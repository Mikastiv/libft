/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_append.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:25:36 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/23 17:45:10 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_string	*ft_string_append(t_string *str, const char *cstr)
{
	while (*cstr)
	{
		ft_string_add_back(str, *cstr);
		++cstr;
	}
	return (str);
}
