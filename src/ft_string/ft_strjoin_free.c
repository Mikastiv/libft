/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:46:58 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/20 16:57:38 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*str;

	if (!s1 || !s2)
	{
		free(s1);
		free(s2);
		return (NULL);
	}
	str = ft_strjoin(s1, s2);
	free(s1);
	free(s2);
	return (str);
}
