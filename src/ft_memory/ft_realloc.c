/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:07:04 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/08 13:36:28 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_realloc(void *ptr, size_t oldsize, size_t size)
{
	t_i8	*newptr;

	if (!ptr)
		return (malloc(size));
	if (size == 0 || oldsize == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (oldsize == size)
		return (ptr);
	newptr = malloc(size);
	if (!newptr)
		return (NULL);
	if (oldsize < size)
		size = oldsize;
	ft_memcpy(newptr, ptr, size);
	free(ptr);
	return (newptr);
}
