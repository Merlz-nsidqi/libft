/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsidqi <nsidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:27:57 by nsidqi            #+#    #+#             */
/*   Updated: 2023/11/06 15:29:18 by nsidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		{
			return ((int)(((unsigned char *)s1)[i]) 
				- ((int)((unsigned char *)s2)[i]));
		}
		i++;
		n--;
	}
	return (0);
}
