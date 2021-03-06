/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 19:35:28 by kahantar          #+#    #+#             */
/*   Updated: 2017/01/21 19:32:28 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int sign;
	int n;
	int res;

	res = 0;
	sign = 1;
	n = 0;
	while (str[n] == ' ' || str[n] == '\n' || str[n] == '\t' || str[n] == '\v'
				|| str[n] == '\r' || str[n] == '\f')
		n++;
	if (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			sign = -1;
		n++;
	}
	else
		sign = 1;
	while (str[n] >= '0' && str[n] <= '9')
	{
		res = (res * 10) + (str[n] - 48);
		n++;
	}
	return (res * sign);
}
