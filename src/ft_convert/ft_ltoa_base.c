/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 14:23:59 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/05 00:43:45 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ltoa_base(long n, const char *base)
{
	char	*ret;
	size_t	len;
	size_t	size;
	size_t	base_len;

	base_len = ft_strlen(base);
	len = ft_numlen(n, (long long)base_len);
	size = len + 1;
	if (n < 0)
		size += 1;
	ret = ft_calloc(size, sizeof(char));
	if (!ret)
		return (NULL);
	ft_ntoa_base(ret, n, len, base);
	return (ret);
}
