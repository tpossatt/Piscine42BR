/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:57:11 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/20 13:57:16 by tpossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		if (i * i > nb)
			return (0);
		i++;
	}
	return (0);
}
