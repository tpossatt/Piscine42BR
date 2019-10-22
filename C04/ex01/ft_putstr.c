/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:40:34 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/16 15:42:12 by tpossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	int n;

	n = 0;
	i = str[n];
	while (str[n])
	{
		write(1, &i, 1);
		n++;
		i = str[n];
	}
}
