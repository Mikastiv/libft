/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount_if.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:16:50 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/25 01:30:51 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stddef.h>

size_t	ft_strcount_if(const char *s, bool(*f)(char))
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (f(*s))
			++count;
		++s;
	}
	return (count);
}
