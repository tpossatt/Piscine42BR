/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 13:27:15 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/06 13:52:37 by tpossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void first_lane(int x, int countx)
{
	if(countx==0)
	{
		ft_putchar('/');
	}
	else if(countx==x-1)
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
}

void midle_lane(int x, int countx)
{
	if(countx==0 || countx==x-1)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void last_lane(int x, int countx)
{
	if(countx==0)
	{
		ft_putchar('\\');
	}
	else if (countx==x-1)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
	}
}

void rush(int x, int y){
	int countx;
	int county;

	county = 0;

	while(county < y){
		countx = 0;
		while(countx < x)
		{
			if(county == 0)
				first_lane(x, countx);
			else if(county == y-1)
				last_lane(x, countx);
			else
				midle_lane(x, countx);
			countx++;
		}
		county++;
		ft_putchar('\n');
	}
}

			
