/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_extend.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 19:21:06 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/30 13:49:16 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strarr_extend(char **arr, char *back_str)
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
		new[i] = arr[i];
		arr[i] = NULL;
		++i;
	}
	new[i] = back_str;
	ft_strarr_free(arr);
	return (new);
}
