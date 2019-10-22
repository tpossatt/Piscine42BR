/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:16:08 by mmirabet          #+#    #+#             */
/*   Updated: 2019/10/20 18:18:51 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RULES_H
# define RULES_H

# include "rush_02.h"

void ft_threedigitsrule(char *str, t_digitsgroup *group);
void ft_hundredsrule(t_dict *dictionary, t_digitsgroup *group);
void ft_tensrule(t_dict *dictionary, t_digitsgroup *group);
void ft_recombinationrule(t_dict *dictionary, t_digitsgroup groups[],
						char *str);

#endif
