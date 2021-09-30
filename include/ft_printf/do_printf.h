/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:37:02 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/20 18:14:11 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_PRINTF_H
# define DO_PRINTF_H

# include <stdarg.h>
# include <wchar.h>

typedef struct s_pinfo
{
	va_list			va;
	unsigned int	flags;
	int				width;
	int				precision;
	int				(*ft_putc)(char);
	int				(*ft_putwc)(wint_t);
	long long		count;
}	t_pinfo;

typedef struct s_wchar_info
{
	unsigned int	header;
	unsigned int	mask;
	int				shift;
	int				size;
}	t_wchar_info;

int	do_printf(const char *fmt, t_pinfo *info);

#endif
