/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:40:41 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/23 17:42:45 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_string	*ft_string_new(char *cstr)
{
	t_string	*str;

	str = (t_string *)ft_calloc(1, sizeof(t_string));
	if (!str)
		return (NULL);
	if (!cstr)
		return (str);
	str->data = cstr;
	str->len = ft_strlen(cstr);
	str->capacity = str->len + 1;
	return (str);
}
