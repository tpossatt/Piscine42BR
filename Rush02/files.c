/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 20:27:44 by mmirabet          #+#    #+#             */
/*   Updated: 2019/10/20 22:57:28 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "files.h"
#include "tools1.h"
#include "rush_02.h"
#include <fcntl.h>

void	ft_getdictnameargs(int argc, char **argv, char* dictname, char* numberarg)
{
	if (argc == 3)
	{
		ft_strcpy(dictname, argv[1]);
		ft_strcpy(numberarg, argv[2]);
	}
	else if (argc == 2)
	{
		ft_strcpy(dictname, "numbers.dict");
		ft_strcpy(numberarg, argv[1]);
	}
}

void	ft_populatesmallnumberskeys(char *keys[])
{
	ft_strcpy(keys[0],"0");
	ft_strcpy(keys[1],"1");
	ft_strcpy(keys[2],"2");
	ft_strcpy(keys[3],"3");
	ft_strcpy(keys[4],"4");
	ft_strcpy(keys[5],"5");
	ft_strcpy(keys[6],"6");
	ft_strcpy(keys[7],"7");
	ft_strcpy(keys[8],"8");
	ft_strcpy(keys[9],"9");
	ft_strcpy(keys[10],"10");
	ft_strcpy(keys[11],"11");
	ft_strcpy(keys[12],"12");
	ft_strcpy(keys[13],"13");
	ft_strcpy(keys[14],"14");
	ft_strcpy(keys[15],"15");
	ft_strcpy(keys[16],"16");
	ft_strcpy(keys[17],"17");
	ft_strcpy(keys[18],"18");
	ft_strcpy(keys[19],"19");
}

void	ft_populatetensscalekeys(char *keys[])
{
	ft_strcpy(keys[20],"20");
	ft_strcpy(keys[21],"30");
	ft_strcpy(keys[22],"40");
	ft_strcpy(keys[23],"50");
	ft_strcpy(keys[24],"60");
	ft_strcpy(keys[25],"70");
	ft_strcpy(keys[26],"80");
	ft_strcpy(keys[27],"90");
	ft_strcpy(keys[28],"100");
	ft_strcpy(keys[29],"1000");
	ft_strcpy(keys[30],"1000000");
	ft_strcpy(keys[31],"1000000000");
	ft_strcpy(keys[32],"1000000000000");
	ft_strcpy(keys[33],"1000000000000000");
	ft_strcpy(keys[34],"1000000000000000000");
	ft_strcpy(keys[35],"1000000000000000000000");
	ft_strcpy(keys[36],"1000000000000000000000000");
	ft_strcpy(keys[37],"1000000000000000000000000000");
	ft_strcpy(keys[38],"1000000000000000000000000000000");
	ft_strcpy(keys[39],"1000000000000000000000000000000000");
	ft_strcpy(keys[40],"1000000000000000000000000000000000000");
}

char *ft_getline(char *line, char *startpos)
{
	int i;
	
	i = 0;
	while (*startpos && *startpos != '\n')
	{
		line[i] = *startpos;
		startpos++;
		i++;
	}
	line[i] = '\0';
	return (startpos); 
}
	
int	ft_openreadfile(char *dictname, char* buffer)
{
	int fd;
	int ret;

	if (fd = open(dictname, O_RWONLY) < 0)
		return (0);
    if (read(fd, buffer, MAX_WORLD_FORM_LENGTH] < 0)
		return (0);
	if (close(fd) < 0)
		return (fd);
	return(1);
}

int	ft_findkeyvalue(char *key, char *dictname)
{
	int ret;
	char buffer[MAX_WORLD_FORM_LENGTH];
	char line[MAX_WORLD_FORM_LENGHT];
	char *startpos;

	if (!ft_openreadfile(dictname, buffer))
		return (0);
	startpos = buffer;
	while (startpos = ft_getline(line, startpos))
	{
		ft_putstr(line);
		ft_putchar('\n');
	}
	return (0);	
}

void    ft_populatedict(t_dict *dictionary, char *dictname)
{
	char keys[MAX_KEYS];
	int i;	

	ft_populatesmallnumberskeys(&keys);
	ft_populatetensscalekeys(&keys);

	i = 0;	
//	while (i < MAX_KEYS)
//	{
		if (!ft_findkeyvalue(keys[i], dictname))
			return (0);
//		i++;
//	}
}



int main(int argc, char **argv)
{
//	char                    wordformcomplete[MAX_WORLD_FORM_LENGTH];
	t_digitsgroup   groups[MAX_GROUPS];
	t_dict                  dictionary;
	char	dictname[MAX_NAMES_LENGTH];
	char	numberarg[MAX_NAMES_LENGH];
	
//	*wordformcomplete = '\0';
	ft_getdictnameargs(argc, argv, dictname, numberarg);
	if (ft_str_is_numeric(numberarg))
	{
		if (!ft_checkzero(numberarg))
		{
			ft_initdict(&dictionary);
			ft_populatedict(&dictionary);
			ft_initgroups(groups);
			ft_threedigitsrule(numberarg, groups);
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
