/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 20:34:07 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/24 16:52:35 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*dup;

	size = ft_strlen(s1) + 1;
	s2 = ft_calloc(size, sizeof(char));
	if (!s2)
		return (NULL);
	ft_memcpy(dup, s, size * sizeof(char));
	return (dup);
}
