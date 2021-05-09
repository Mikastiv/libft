/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 12:09:27 by mleblanc          #+#    #+#             */
/*   Updated: 2021/05/09 01:24:01 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	newlen;
	size_t	strlen;
	char	*substr;

	strlen = ft_strlen(s);
	if (strlen > start)
		newlen = ft_strnlen(s + start, len);
	else
	{
		newlen = 0;
		if (strlen > 0)
			start = strlen - 1;
		else
			start = 0;
	}
	substr = (char *)ft_calloc(newlen + 1, sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, (newlen + 1) * sizeof(char));
	return (substr);
}
