/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsidqi <nsidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:19:01 by nsidqi            #+#    #+#             */
/*   Updated: 2023/11/04 12:21:31 by nsidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	w;

	i = 0;
	w = -1;
	while (s[i])
	{
		if (s[i] == (const char)c)
			w = i;
		i++;
	}
	if (s[i] == (const char)c)
		return ((char *)s + i);
	if (w != -1)
		return ((char *)s + w);
	return (0);
}
