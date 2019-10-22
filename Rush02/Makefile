#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 19:25:49 by mmirabet          #+#    #+#              #
#    Updated: 2019/10/20 22:29:59 by mmirabet         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = rush-02

SRC = main.c rules.c tools1.c tools2.c tools3.c

all: $(NAME)

$(NAME):
	@cc -Wall -Werror -Wextra -o $(NAME) $(SRC)

clean:
	@/bin/rm -f *.o *~

fclean: clean
	@/bin/rm -f $(NAME)

re:	fclean all
