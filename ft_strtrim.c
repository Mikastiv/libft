/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:25:28 by mleblanc          #+#    #+#             */
/*   Updated: 2021/05/06 15:08:01 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*ret;
	const char	*end;
	size_t		len;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = s1 + (ft_strlen(s1) - 1) * sizeof(char);
	while (end > s1 && ft_strchr(set, *end))
		end--;
	len = end - s1 + 1;
	ret = (char *)malloc((len + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s1, len);
	ret[len] = '\0';
	return (ret);
}
