/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsidqi <nsidqi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:43:23 by nsidqi            #+#    #+#             */
/*   Updated: 2023/11/14 10:50:26 by nsidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_handle(const char *str, int sign, int i)
{
	long long	nb;
	long long	n;

	n = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (nb * 10) + (str[i] - '0');
		if (n < nb && sign == 1)
			return (-1);
		else if (n < nb && sign == -1)
			return (0);
		nb = n;
		i++;
	}
	return ((int) nb * sign);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (ft_handle(str, sign, i));
}
