/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shrink_strarr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 21:13:43 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/15 21:20:23 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_shrink_strarr(char **arr, size_t index)
{
	if (index >= ft_strarr_size(arr))
		return ;
	free(arr[index]);
	while (arr[index])
	{
		arr[index] = arr[index + 1];
		++index;
	}
}
