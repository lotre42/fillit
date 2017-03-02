/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 10:22:30 by kahantar          #+#    #+#             */
/*   Updated: 2017/03/02 18:58:23 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft2/libft.h"
#include <stdlib.h>

void	ft_attribute(char c)
{
	(void)c;
}

void	ft_width(int n)
{
	(void)n;
}

void	ft_precision(int n)
{
	(void)n;
}

void	ft_convert(char c)
{
	(void)c;
}

void	ft_printf(const char *str)
{
	int		i;
	int		n;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '%' && str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
		if (str[i] == '\0')
			break ;
		i++;
		if (!ft_isalnum(str[i]))
			ft_attribute(str[i++]);
		if (!ft_isalnum(str[i]))
			ft_attribute(str[i++]);
		if (ft_atoi(&str[i]))
		{
			n = ft_atoi(&str[i++]);
			ft_width(n);
			while ((n = n / 10) > 1)
				i++;
		}
		if (str[i] == '.')
			i++;
		if (ft_atoi(&str[i]))
		{
			n = ft_atoi(&str[i++]);
			ft_precision(n);
			while ((n = n / 10) > 1)
				i++;
		}
		if (ft_isalpha(str[i]))
			ft_convert(str[i++]);
	}
}

int		main(void)
{
	char *str;

	str = NULL;
	str = ft_strdup("salut les %500.50d coucou");
	ft_printf(str);
	return (0);
}
