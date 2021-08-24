/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:53:31 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/23 22:59:32 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_string.h"
#include <stdlib.h>

void	ft_strfree(t_string str)
{
	t_string_	*s;

	s = (t_string_ *)str;
	free(s->data);
	free(str);
}
