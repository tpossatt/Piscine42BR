/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:16:57 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/20 10:38:37 by tpossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		x;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		x = 0;
		if (to_find[0] == str[i])
		{
			while (to_find[x] == str[i + x])
			{
				if (to_find[x + 1] == '\0')
					return (&str[i]);
				x++;
			}
		}
		i++;
	}
	return (0);
}
