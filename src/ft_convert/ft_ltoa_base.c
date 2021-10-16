/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 14:23:59 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/16 18:59:36 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_ntoa_base(char *b, int64_t n, size_t len, const char *base)
{
	int64_t	radix;
	int64_t	i;

	radix = (int64_t)ft_strlen(base);
	if (n < 0)
		*b++ = '-';
	while (len > 0)
	{
		i = n % radix;
		if (i < 0)
			i *= -1;
		b[--len] = base[i];
		n /= radix;
	}
}

char	*ft_ltoa_base(int64_t n, const char *base)
{
	char	*ret;
	size_t	len;
	size_t	size;
	size_t	radix;

	radix = ft_strlen(base);
	len = ft_numlen(n, (int64_t)radix);
	size = len + 1;
	if (n < 0)
		size += 1;
	ret = ft_calloc(size, sizeof(char));
	if (!ret)
		return (NULL);
	ft_ntoa_base(ret, n, len, base);
	return (ret);
}
