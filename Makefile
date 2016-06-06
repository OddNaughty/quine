#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwagner <cwagner@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/25 12:34:27 by cwagner           #+#    #+#              #
#    Updated: 2015/11/30 14:24:39 by cwagner          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = clang
CFLAGS = -Wall -Wextra -Werror

NAME_C =		Colleen/Colleen
NAME_G =		Grace/Grace
NAME_S = 		Sully/Sully

COL =	Colleen/Colleen.c
GRA = Grace/Grace.c
SUL = Sully/Sully.c

OBJ_COL = 	Colleen/Colleen.o
OBJ_GRA = 	Grace/Grace.o
OBJ_SUL = 	Sully/Sully.o

all: $(NAME_C) $(NAME_G) $(NAME_S)

$(NAME_C): $(OBJ_COL)
	@echo "\033[32m[Building Colleen] \033[0m" | tr -d '\n'
	$(CC) $(CFLAGS) $(OBJ_COL) -o $@

$(NAME_G): $(OBJ_GRA)
	@echo "\033[32m[Building Grace] \033[0m" | tr -d '\n'
	$(CC) $(CFLAGS) $(OBJ_GRA) -o $@

$(NAME_S): $(OBJ_SUL)
	@echo "\033[32m[Building Sully] \033[0m" | tr -d '\n'
	$(CC) $(CFLAGS) $(OBJ_SUL) -o $@

%.o: %.c
	@echo "\033[33m[Doing object] \033[0m" | tr -d '\n'
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@echo "\033[34m[Cleaning] \033[0m" | tr -d '\n'
	rm -f $(OBJ_COL) $(OBJ_SUL) $(OBJ_GRA)

fclean: clean
	@echo "\033[34m[Filecleaning] \033[0m" | tr -d '\n'
	rm -f $(NAME_S) $(NAME_C) $(NAME_G)

re: fclean all

run: all
	@echo "\033[32m[Running Binary]\033[0m" | tr -d '\n'
	@echo ""
	@./$(NAME_S) 4242
	@./$(NAME_C) 127.0.0.1 4242
	@make clean

.PHONY: clean fclean re
