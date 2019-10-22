/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:43:45 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/16 15:44:09 by tpossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recursion(long h)
{
	char p;

	if (h >= 10)
		ft_recursion(h / 10);
	h = (h % 10) + '0';
	p = h;
	write(1, &p, 1);
}

void	ft_putnbr(int nb)
{
	long h;

	h = nb;
	if (h >= 0)
	{
		ft_recursion(h);
	}
	else
	{
		write(1, "-", 1);
		h = 0 - h;
		ft_recursion(h);
	}
}
