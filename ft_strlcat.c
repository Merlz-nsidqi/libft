/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsidqi <nsidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:40:36 by nsidqi            #+#    #+#             */
/*   Updated: 2023/11/12 18:51:33 by nsidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	r;
	size_t	d;

	r = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	d = ft_strlen(dst);
	if (dstsize <= d || dstsize == 0)
		return (dstsize + ft_strlen(src));
	while (src[r] && r < (dstsize - d - 1))
	{
		dst[d + r] = src[r];
		r++;
	}
	dst[d + r] = '\0';
	return (d + ft_strlen(src));
}

