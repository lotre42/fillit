/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 18:40:07 by kahantar          #+#    #+#             */
/*   Updated: 2017/01/23 19:04:22 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	int c;

	if (!n)
		return (0);
	c = 0;
	while (s1[c] == s2[c] && s1[c] != '\0' && s2[c] != '\0')
	{
		if (n == 1)
			return (0);
		c++;
		n--;
	}
	if (s1[c] != s2[c])
		return ((unsigned char)s1[c] - (unsigned char)s2[c]);
	return (0);
}
