/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 22:37:23 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/23 22:37:28 by tpossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_atoi(char *str)
{
	int						i;
	unsigned long long		x;
	int						negative;

	i = 0;
	negative = 1;
	x = 0;
	while (SPACE(str[i]))
		str++;
	if (str[i] == '-' || str[i] == '+')
	{
		negative = str[i] == '-' ? -1 : 1;
		str++;
	}
	while (*str == '0')
		str++;
	while (str[i] != '\0' && i != g_map_dims[2] - 3)
	{
		if (i > 19 || x > 9223372036854775807ULL)
			return (negative == 1 ? -1 : 0);
		if (str[i] > '9' || str[i] < '0')
			return (negative * x);
		x = x * 10 + str[i++] - '0';
	}
	return (negative * x);
}
