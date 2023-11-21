/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsidqi <nsidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:31:40 by nsidqi            #+#    #+#             */
/*   Updated: 2023/11/11 14:19:32 by nsidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	res = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char const));
	if (res == 0)
		return (0);
	while (i < ft_strlen(s1))
		res[j++] = s1[i++];
	i = 0;
	while (i < ft_strlen(s2))
		res[j++] = s2[i++];
	res[j] = '\0';
	return (res);
}
