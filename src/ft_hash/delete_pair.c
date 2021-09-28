/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_pair.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:44:27 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/28 12:50:18 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashmap.h"
#include <stdlib.h>

void	delete_pair(void *pair, void (*del)(void *))
{
	t_pair	*p;

	p = pair;
	del(p->value);
	free(p->key);
	free(p);
}
