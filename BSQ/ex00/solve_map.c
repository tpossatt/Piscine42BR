/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 22:38:55 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/23 22:38:58 by tpossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		solve_map(void)
{
	int		i;
	int		j;

	i = -1;
	while (++i < g_map_dims[0])
	{
		j = -1;
		while (++j < g_map_dims[1])
			if (determine_number(i, j) == FALSE)
				return (FALSE);
	}
	update_map();
	return (TRUE);
}

int		determine_number(int i, int j)
{
	if (g_map[i][j].lett == g_legend[1])
		g_map[i][j].numb = 0;
	else if (g_map[i][j].lett != g_legend[0])
		return (FALSE);
	else if (i == 0 || j == 0)
		g_map[i][j].numb = 1;
	else
		g_map[i][j].numb = (min_of_top_left_topleft(i, j) + 1);
	if (g_map[i][j].numb > g_max_coords[2])
	{
		g_max_coords[0] = i;
		g_max_coords[1] = j;
		g_max_coords[2] = g_map[i][j].numb;
	}
	return (TRUE);
}

int		min_of_top_left_topleft(int i, int j)
{
	if (g_map[i - 1][j].numb <= g_map[i - 1][j - 1].numb &&
		g_map[i - 1][j].numb <= g_map[i][j - 1].numb)
		return (g_map[i - 1][j].numb);
	else if (g_map[i][j - 1].numb <= g_map[i - 1][j - 1].numb &&
				g_map[i][j - 1].numb <= g_map[i - 1][j].numb)
		return (g_map[i][j - 1].numb);
	else
		return (g_map[i - 1][j - 1].numb);
}

void	update_map(void)
{
	int		i;
	int		j;

	i = g_max_coords[0] - g_max_coords[2];
	while (++i <= g_max_coords[0])
	{
		j = g_max_coords[1] - g_max_coords[2];
		while (++j <= g_max_coords[1])
			g_map[i][j].lett = g_legend[2];
	}
}
