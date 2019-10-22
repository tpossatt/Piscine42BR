/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anauata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 13:50:16 by anauata           #+#    #+#             */
/*   Updated: 2019/10/06 14:27:21 by anauata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char i);

void	paternone(int x, int horizcount)
{
	if (horizcount == 0)
	{
		ft_putchar('o');
	}
	else if (horizcount == x - 1)
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('-');
	}
}

void	paterntwo(int x, int horizcount)
{
	if (horizcount == 0 || horizcount == x - 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int horizcount;
	int vertcount;

	vertcount = 0;
	while (vertcount < y)
	{
		horizcount = 0;
		while (horizcount < x)
		{
			if (vertcount == 0)
				paternone(x, horizcount);
			else if (vertcount == y - 1)
				paternone(x, horizcount);
			else
				paterntwo(x, horizcount);
			horizcount++;
		}
		vertcount++;
		ft_putchar('\n');
	}
}
