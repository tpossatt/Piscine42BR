/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 11:21:31 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/16 22:02:30 by tpossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] == s2[j])
	{
		i++;
		j++;
		if (s1[i] == '\0' && s2[j] == '\0')
			return (0);
	}
	if (s1[i] != s2[j])
		return (s1[i] - s2[j]);
	return (0);
}
