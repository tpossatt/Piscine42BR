/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 22:37:01 by tpossatt          #+#    #+#             */
/*   Updated: 2019/10/23 22:37:08 by tpossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	free_all(void)
{
	int i;

	if (g_map_malloc_error == FALSE)
	{
		i = 0;
		while (i < g_map_dims[0])
			free(g_map[i++]);
		free(g_map);
	}
	if (g_input_malloc_error == FALSE)
		free(g_input);
	g_input_len = 0;
	g_map_dims[0] = 0;
	g_map_dims[1] = 0;
	g_map_dims[2] = 0;
	g_legend[0] = 0;
	g_legend[1] = 0;
	g_legend[2] = 0;
	g_max_coords[0] = 0;
	g_max_coords[1] = 0;
	g_max_coords[2] = 0;
	g_map_malloc_error = FALSE;
	g_input_malloc_error = FALSE;
}
