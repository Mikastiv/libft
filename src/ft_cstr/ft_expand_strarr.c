/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expand_strarr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 19:21:06 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/15 17:19:53 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_expand_strarr(char **arr, char *back_str)
{
	size_t	i;
	char	**new;

	i = ft_strarr_size(arr);
	new = ft_calloc(i + 2, sizeof(char *));
	if (!new)
		return (NULL);
	i = 0;
	while (arr[i])
	{
		new[i] = ft_strdup(arr[i]);
		if (!new[i])
		{
			ft_free_strarr(new);
			return (NULL);
		}
		++i;
	}
	new[i] = back_str;
	ft_free_strarr(arr);
	return (new);
}
