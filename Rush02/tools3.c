/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 22:03:09 by mmirabet          #+#    #+#             */
/*   Updated: 2019/10/20 22:09:14 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools1.h"
#include "rush_02.h"

void	ft_populatedict1(t_dict *dictionary)
{
	ft_strcpy(dictionary->smallnumbers[0], "");
	ft_strcpy(dictionary->smallnumbers[1], "one");
	ft_strcpy(dictionary->smallnumbers[2], "two");
	ft_strcpy(dictionary->smallnumbers[3], "three");
	ft_strcpy(dictionary->smallnumbers[4], "four");
	ft_strcpy(dictionary->smallnumbers[5], "five");
	ft_strcpy(dictionary->smallnumbers[6], "six");
	ft_strcpy(dictionary->smallnumbers[7], "seven");
	ft_strcpy(dictionary->smallnumbers[8], "eight");
	ft_strcpy(dictionary->smallnumbers[9], "nine");
	ft_strcpy(dictionary->smallnumbers[10], "ten");
	ft_strcpy(dictionary->smallnumbers[11], "eleven");
	ft_strcpy(dictionary->smallnumbers[12], "twelve");
	ft_strcpy(dictionary->smallnumbers[13], "thirteen");
	ft_strcpy(dictionary->smallnumbers[14], "fourteen");
	ft_strcpy(dictionary->smallnumbers[15], "fifteen");
	ft_strcpy(dictionary->smallnumbers[16], "sixteen");
	ft_strcpy(dictionary->smallnumbers[17], "seventeen");
	ft_strcpy(dictionary->smallnumbers[18], "eighteen");
	ft_strcpy(dictionary->smallnumbers[19], "nineteen");
	ft_strcpy(dictionary->tens[0], "");
	ft_strcpy(dictionary->tens[1], "");
	ft_strcpy(dictionary->tens[2], "twenty");
	ft_strcpy(dictionary->tens[3], "thirty");
	ft_strcpy(dictionary->tens[4], "fourty");
	ft_strcpy(dictionary->tens[5], "fifty");
	ft_strcpy(dictionary->tens[6], "sixty");
	ft_strcpy(dictionary->tens[7], "seventy");
	ft_strcpy(dictionary->tens[8], "eighty");
	ft_strcpy(dictionary->tens[9], "ninety");
}

void	ft_populatedict2(t_dict *dictionary)
{
	ft_strcpy(dictionary->scalenumbers[0], "");
	ft_strcpy(dictionary->scalenumbers[1], "thousand");
	ft_strcpy(dictionary->scalenumbers[2], "million");
	ft_strcpy(dictionary->scalenumbers[3], "billion");
	ft_strcpy(dictionary->scalenumbers[4], "trillion");
	ft_strcpy(dictionary->scalenumbers[5], "quadrillion");
	ft_strcpy(dictionary->scalenumbers[6], "quintillion");
	ft_strcpy(dictionary->scalenumbers[7], "sextillion");
	ft_strcpy(dictionary->scalenumbers[8], "septillion");
	ft_strcpy(dictionary->scalenumbers[9], "octillion");
	ft_strcpy(dictionary->scalenumbers[10], "nonillion");
	ft_strcpy(dictionary->scalenumbers[11], "decillion");
	ft_strcpy(dictionary->scalenumbers[12], "undecillion");
	ft_strcpy(dictionary->scalenumbers[13], "duodecillion");
	ft_strcpy(dictionary->scalenumbers[14], "tredecillion");
	ft_strcpy(dictionary->scalenumbers[15], "quattuordecillion");
	ft_strcpy(dictionary->scalenumbers[16], "quindecillion");
	ft_strcpy(dictionary->scalenumbers[17], "sexdecillion");
	ft_strcpy(dictionary->scalenumbers[18], "septendecillion");
	ft_strcpy(dictionary->scalenumbers[19], "octodecillion");
	ft_strcpy(dictionary->scalenumbers[20], "novemdecillion");
	ft_strcpy(dictionary->scalenumbers[21], "vigintillion");
}
