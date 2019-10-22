/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 11:59:44 by mmirabet          #+#    #+#             */
/*   Updated: 2019/10/20 17:50:34 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

# include <stdlib.h>
# include <unistd.h>

# define MAX_SMALL_NUMBERS		20
# define MAX_TENS_NUMBERS		10
# define MAX_SCALE_NUMBERS		22
# define MAX_GROUPS				22
# define MAX_WORLD_FORM_LENGTH	4096
# define MAX_NAMES_LENGTH		256

typedef	struct s_threedigitgroup	t_digitsgroup;

struct	s_threedigitgroup
{
	char	wordform[MAX_WORLD_FORM_LENGTH];
	int		groupnbr;
};

typedef struct s_dictionary	t_dict;

struct	s_dictionary
{
	char	*smallnumbers[MAX_SMALL_NUMBERS];
	char	*tens[MAX_TENS_NUMBERS];
	char	*scalenumbers[MAX_SCALE_NUMBERS];
};

#endif
