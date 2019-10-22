/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:45:11 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/19 17:35:59 by tpossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		spaces(char *str)
{
	int		i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t'
	|| str[i] == '\n' || str[i] == '\f'
	|| str[i] == '\r' || str[i] == '\v')
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int		i;
	int		number;
	char	signal;

	i = spaces(str);
	signal = '+';
	while (str[i] == '-' || str[i] == '+')
	{
		if (signal != str[i])
			signal = '-';
		else
			signal = '+';
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10;
		number = number + str[i] - '0';
		i++;
	}
	if (signal == '-')
		number *= -1;
	return (number);
}
