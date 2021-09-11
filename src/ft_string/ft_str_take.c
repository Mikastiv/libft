/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_take.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:20:57 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/11 18:33:46 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_string.h"

char	*ft_str_take(t_string str)
{
	t_string_	*ptr;
	char		*ret;

	ptr = str;
	ret = ptr->data;
	ptr->data = ft_calloc(1, sizeof(char));
	if (!ptr->data)
	{
		ptr->data = ret;
		return (NULL);
	}
	ptr->len = 0;
	ptr->capacity = 1;
	return (ret);
}
