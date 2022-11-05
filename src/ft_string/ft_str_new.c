/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:40:41 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/29 10:33:55 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_string	*ft_str_new(t_string *str, char *cstr)
{
	str->data = cstr;
	str->len = ft_strlen(cstr);
	str->cap = str->len + 1;
	return (str);
}
