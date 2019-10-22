/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:53:22 by mmirabet          #+#    #+#             */
/*   Updated: 2019/10/20 22:25:24 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"
#include "tools2.h"
#include "tools1.h"

void	ft_threedigitsrule(char *str, t_digitsgroup groups[])
{
	char	*s;
	char	*e;
	int		i;
	int		j;

	e = ft_strend(str);
	j = 0;
	while (e >= str)
	{
		groups[j].groupnbr = 0;
		if ((e - str) > 2)
			s = e - 2;
		else
			s = e - (e - str);
		i = 0;
		while (e >= s + i)
		{
			groups[j].groupnbr = groups[j].groupnbr * 10 + (*(s + i) - '0');
			i++;
		}
		e = s - 1;
		j++;
	}
}

void	ft_tensrule(t_dict *dictionary, t_digitsgroup *group)
{
	int	tensunits;
	int	tens;
	int	units;

	tensunits = group->groupnbr % 100;
	tens = tensunits / 10;
	units = tensunits % 10;
	if (tens >= 2)
	{
		ft_strcat(group->wordform, dictionary->tens[tens]);
		if (units)
		{
			ft_strcat(group->wordform, " ");
			ft_strcat(group->wordform, dictionary->smallnumbers[units]);
		}
	}
	else if (tensunits)
		ft_strcat(group->wordform, dictionary->smallnumbers[tensunits]);
}

void	ft_hundredsrule(t_dict *dictionary, t_digitsgroup groups[])
{
	int hundreds;
	int tensunits;
	int i;

	i = 0;
	while (i < MAX_GROUPS)
	{
		hundreds = groups[i].groupnbr / 100;
		tensunits = groups[i].groupnbr % 100;
		if (hundreds)
		{
			ft_strcat(groups[i].wordform, dictionary->smallnumbers[hundreds]);
			ft_strcat(groups[i].wordform, " hundred");
			if (tensunits)
				ft_strcat(groups[i].wordform, " and ");
		}
		ft_tensrule(dictionary, &groups[i]);
		i++;
	}
}

void	ft_recombinationrule(t_dict *dictionary,
							t_digitsgroup groups[], char *str)
{
	int i;

	i = MAX_GROUPS - 1;
	while (i >= 0)
	{
		if (groups[i].groupnbr)
		{
			if (ft_strlen(str))
			{
				if (i == 0)
					if ((groups[0].groupnbr > 0 && groups[0].groupnbr < 100))
						ft_strcat(str, " and ");
					else
						ft_strcat(str, ", ");
				else
					ft_strcat(str, ", ");
			}
			ft_strcat(str, groups[i].wordform);
			if (i != 0)
				ft_strcat(str, " ");
			ft_strcat(str, dictionary->scalenumbers[i]);
		}
		i--;
	}
}
