/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 03:52:25 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/24 04:57:52 by tpossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*str;
	int		i;
	int		len;

	if (min >= max)
		return (NULL);
	i = 0;
	len = max - min;
	str = malloc (sizeof(int) * len);
	while (i < len)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
