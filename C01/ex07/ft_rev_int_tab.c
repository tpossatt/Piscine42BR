/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:29:06 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/10 16:11:05 by tpossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int begin;
	int final;
	int temp;

	begin = 0;
	final = size - 1;
	while (begin < final)
	{
		temp = tab[final];
		tab[final] = tab[begin];
		tab[begin] = temp;
		begin++;
		final--;
	}
}
