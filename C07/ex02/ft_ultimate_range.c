/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 04:45:55 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/24 05:05:17 by tpossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		len;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (*range[0]);
	}
	len = max - min;
	*range = (int *)malloc(sizeof(**range) * (len + 1));	
	while (i < len)
	{
		range[0][i] = min + i;
		i++;
	}
	range[0][i] = 0;
	return (i);
}
		
