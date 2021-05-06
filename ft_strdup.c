/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 20:34:07 by mleblanc          #+#    #+#             */
/*   Updated: 2021/05/05 20:44:00 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <sys/errno.h>

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*s2;

	size = ft_strlen(s1);
	s2 = (char *)malloc(size + 1);
	if (!s2)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_memcpy(s2, s1, size + 1);
	return (s2);
}
