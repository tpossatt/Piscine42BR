/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 22:38:11 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/23 22:38:14 by tpossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int argc, char **argv)
{
	int			i;

	i = -1;
	while (++i < argc)
	{
		if ((g_map = (t_map_b**)malloc(sizeof(t_map_b*))) == FALSE)
		{
			write(2, "map error\n", 10);
			g_map_malloc_error = TRUE;
		}
		else if ((g_input = (char*)malloc(sizeof(char))) == FALSE)
		{
			g_input_malloc_error = TRUE;
			write(2, "map error\n", 10);
		}
		else if (handle_input(&i, argc, argv) == FALSE || solve_map() == FALSE)
			write(2, "map error\n", 10);
		else
		{
			print_map();
		}
		free_all();
	}
	return (0);
}

int		handle_input(int *i, int argc, char **argv)
{
	if (*i == 0 && argc == 1)
	{
		if (set_up_legend_and_map(0) == FALSE)
			return (FALSE);
	}
	else if (*i == 0 && argc != 1)
	{
		if (set_up_legend_and_map(argv[++(*i)]) == FALSE)
			return (FALSE);
	}
	else
	{
		write(1, "\n", 1);
		if (set_up_legend_and_map(argv[*i]) == FALSE)
			return (FALSE);
	}
	return (TRUE);
}
