/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:30:43 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/16 23:24:52 by tpossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
	}
	else
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	logic(char a, char b, char c, char d)
{
	while (a <= '9')
	{
			while (b <= '9')
			{
				while (c <= '9')
				{
					while (d <= '9')
					{
						print(a, b, c, d);
						d++;
					}
					d = '0';
					c++;
				}
				b++;
				c = a;
				d = b + 1;
			}
			a++;
			b = '0';
			c = a;
			d = b + 1;
		}
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	logic(a, b, c, d);
}
