/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsidqi <nsidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:38:32 by nsidqi            #+#    #+#             */
/*   Updated: 2023/11/15 14:50:23 by nsidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count && size && count > (UINT_MAX / size))
		return (NULL);
	p = malloc(count * size);
	if (p == 0)
		return (0);
	ft_bzero(p, size * count);
	return (p);
}
