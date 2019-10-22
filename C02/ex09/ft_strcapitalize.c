/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 08:36:56 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/20 12:13:09 by tpossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_minor(char *str);

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_minor(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' &&
					str[i] <= 'Z'))
		{
			if (((str[i - 1] < '0') || (str[i - 1] > '9'&& str[i - 1] < 'A') || (str[i - 1] > 'Z' && str[i - 1] < 'a') || (str[i - 1] > 'z')))
			{
				str[i] -= 32;
			}
		}
		str[i] = str[i];
		i++;
	}
	return (str);
}

char	*ft_minor(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
