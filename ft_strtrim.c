/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:25:28 by mleblanc          #+#    #+#             */
/*   Updated: 2021/05/09 01:35:23 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*ret;
	const char	*end;
	size_t		len;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	if (len > 0)
		end = s1 + (len - 1) * sizeof(char);
	else
		end = s1;
	while (end > s1 && ft_strchr(set, *end))
		end--;
	len = end - s1 + 1;
	ret = (char *)ft_calloc(len + 1, sizeof(char));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s1, len);
	return (ret);
}
