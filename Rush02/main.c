/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 11:13:21 by mmirabet          #+#    #+#             */
/*   Updated: 2019/10/20 22:23:14 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"
#include "tools1.h"
#include "tools3.h"
#include "rules.h"

void	ft_deallocatedict(t_dict *dictionary)
{
	free(dictionary->smallnumbers);
	free(dictionary->tens);
	free(dictionary->scalenumbers);
}

void	ft_populatedict(t_dict *dictionary)
{
	ft_populatedict1(dictionary);
	ft_populatedict2(dictionary);
}

void	ft_initdict(t_dict *dictionary)
{
	int i;

	i = 0;
	while (i < MAX_SMALL_NUMBERS)
	{
		dictionary->smallnumbers[i] =
			(char *)malloc(sizeof(char) * MAX_NAMES_LENGTH);
		i++;
	}
	i = 0;
	while (i < MAX_TENS_NUMBERS)
	{
		dictionary->tens[i] =
			(char *)malloc(sizeof(char) * MAX_NAMES_LENGTH);
		i++;
	}
	i = 0;
	while (i < MAX_SCALE_NUMBERS)
	{
		dictionary->scalenumbers[i] =
			(char *)malloc(sizeof(char) * MAX_NAMES_LENGTH);
		i++;
	}
}

void	ft_initgroups(t_digitsgroup groups[])
{
	int i;

	i = 0;
	while (i < MAX_GROUPS)
	{
		groups[i].groupnbr = 0;
		i++;
	}
}

int		main(int argc, char **argv)
{
	char			wordformcomplete[MAX_WORLD_FORM_LENGTH];
	t_digitsgroup	groups[MAX_GROUPS];
	t_dict			dictionary;

	*wordformcomplete = '\0';
	if (argc == 2 && ft_str_is_numeric(argv[1]))
	{
		if (!ft_checkzero(argv[1]))
		{
			ft_initdict(&dictionary);
			ft_populatedict(&dictionary);
			ft_initgroups(groups);
			ft_threedigitsrule(argv[1], groups);
			ft_hundredsrule(&dictionary, groups);
			ft_recombinationrule(&dictionary, groups, wordformcomplete);
			ft_putstr(wordformcomplete);
			ft_putchar('\n');
		}
		else
			ft_putstr("zero\n");
	}
	else
		ft_putstr("error\n");
	return (0);
}
