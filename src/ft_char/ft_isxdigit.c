/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:23:51 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/26 16:25:32 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isxdigit(char c)
{
	return (ft_isdigit(c)
		|| ((unsigned char)c >= 'a' && (unsigned char)c <= 'f')
		|| ((unsigned char)c >= 'A' && (unsigned char)c <= 'F'));
}
