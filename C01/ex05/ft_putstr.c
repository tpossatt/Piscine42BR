/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:30:33 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/13 20:12:55 by tpossatt         ###   ########.fr       */
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
