/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_cmp_cstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:57:17 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/06 01:30:14 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_string.h"

t_i32	ft_str_cmp_cstr(const t_string s1, const char *s2, size_t n)
{
	return (ft_strncmp(ft_str_data(s1), s2, n));
}
