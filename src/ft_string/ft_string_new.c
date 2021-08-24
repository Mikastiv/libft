/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:40:41 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/23 21:43:48 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_string	*ft_string_new(char *cstr)
{
	t_string	*str;

	str = (t_string *)ft_calloc(1, sizeof(t_string));
	if (!str)
		return (NULL);
	if (!cstr)
	{
		str->data = (char *)ft_calloc(1, sizeof(char));
		if (!str->data)
		{
			free(str);
			return (NULL);
		}
		str->capacity = 1;
		return (str);
	}
	str->data = cstr;
	str->len = ft_strlen(cstr);
	str->capacity = str->len + 1;
	return (str);
}
