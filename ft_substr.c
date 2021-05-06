/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 12:09:27 by mleblanc          #+#    #+#             */
/*   Updated: 2021/05/06 18:50:53 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	newlen;
	char	*substr;

	newlen = ft_strnlen(s + start, len) + 1;
	substr = (char *)ft_calloc(newlen, sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, newlen * sizeof(char));
	return (substr);
}
