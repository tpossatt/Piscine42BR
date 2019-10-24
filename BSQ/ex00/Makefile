# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/23 17:43:45 by tpossatt          #+#    #+#              #
#    Updated: 2019/10/23 22:41:44 by tpossatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = free_all.c print_map.c ft_atoi.c set_up_legend_and_map.c solve_map.c main.c

all: $(NAME)

$(NAME):
	@cc -Wall -Werror -Wextra -o $(NAME) $(SRC)

clean:
	@/bin/rm -f *.o *~

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
