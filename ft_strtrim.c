/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsidqi <nsidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:50:09 by nsidqi            #+#    #+#             */
/*   Updated: 2023/11/08 18:01:43 by nsidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

static int	ft_end(char const *s1, int e, char const *set)
{
	while (e > 0 && ft_strchr(set, s1[e - 1]))
		e--;
	return (e);
}

static char	*ft_ha(void)
{
	char	*s;

	s = malloc(1);
	if (s == 0)
		return (0);
	s[0] = '\0';
	return (s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		s;
	int		e;
	int		i;

	i = 0;
	if (s1 == 0 || set == 0)
		return (0);
	s = ft_start(s1, set);
	e = ft_strlen(s1);
	if (s == e)
		return (ft_ha());
	e = ft_end(s1, e, set);
	res = malloc((e - s + 1) * sizeof(char));
	if (res == 0)
		return (0);
	while (s < e)
	{
		res[i] = s1[s];
		s++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
