/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 00:32:01 by mleblanc          #+#    #+#             */
/*   Updated: 2021/05/16 00:34:54 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int num, int base)
{
	size_t	len;

	len = 0;
	while (num / base != 0)
	{
		num /= base;
		len++;
	}
	return (len + 1);
}

static void	ft_num_to_ascii(char *buf, long n, long base, size_t len)
{
	if (n < 0)
	{
		*buf = '-';
		n *= -1;
		buf++;
	}
	while (len > 0)
	{
		buf[--len] = "0123456789ABCDEF"[n % base];
		n /= base;
	}
}

char	*ft_itoa_base(int n, int base)
{
	char	*ret;
	size_t	len;
	size_t	size;

	len = ft_numlen(n, base);
	size = len + 1;
	if (n < 0)
		size += 1;
	ret = (char *)ft_calloc(size, sizeof(char));
	if (!ret)
		return (NULL);
	ft_num_to_ascii(ret, (long)n, (long)base, len);
	return (ret);
}
