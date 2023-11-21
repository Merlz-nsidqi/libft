/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsidqi <nsidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:26:50 by nsidqi            #+#    #+#             */
/*   Updated: 2023/11/06 15:14:43 by nsidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num(int nb)
{
	int	r;

	r = 0;
	if (nb < 0)
	{
		nb *= -1;
		r++;
	}
	while (nb)
	{
		nb = nb / 10;
		r++;
	}
	return (r);
}

static char	*ft_strrev(char *r, int nb)
{
	int		i;
	int		l;
	char	t;

	if (nb < 0)
		i = 1;
	else
		i = 0;
	l = ft_strlen(r);
	l--;
	while (i < l)
	{
		t = r[i];
		r[i] = r[l];
		r[l] = t;
		i++;
		l--;
	}
	return (r);
}

static char	*smiti(int i, int j, int n, char *res)
{
	while (i < j)
	{
		if (n < 10)
			res[i] = n + '0';
		else
		{
			res[i] = (n % 10 + '0');
			n = (n / 10);
		}
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		j;
	size_t	nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	nb = n;
	if (n == 0)
		j = 1;
	else
		j = ft_num(n);
	res = malloc((j + 1) * sizeof(char));
	if (res == 0)
		return (0);
	if (n < 0)
	{
		res[i] = '-';
		n *= -1;
		i++;
	}
	res = smiti(i, j, n, res);
	return (ft_strrev(res, nb));
}
