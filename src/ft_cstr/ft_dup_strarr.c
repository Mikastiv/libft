/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup_strarr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:01:24 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/24 14:10:16 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_dup_strarr(char **arr)
{
	size_t	i;
	char	**dup;

	i = 0;
	while (arr[i])
		++i;
	dup = (char **)ft_calloc(i + 1, sizeof(char *));
	if (!dup)
		return (NULL);
	i = 0;
	while (arr[i])
	{
		dup[i] = ft_strdup(arr[i]);
		if (!dup[i])
		{
			ft_free_strarr(dup);
			return (NULL);
		}
		++i;
	}
	return (dup);
}
