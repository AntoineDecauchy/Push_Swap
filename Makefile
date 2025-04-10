# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adecauch <adecauch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/10 23:11:08 by adecauch          #+#    #+#              #
#    Updated: 2025/04/10 23:11:13 by adecauch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap
SRC = push_swap.c\
./instructions/swap.c ./instructions/push.c ./instructions/rotate.c ./instructions/reverse_rotate.c\
./sort/easy_sort.c\
./utility/node.c ./utility/list.c\
./libft/libft.c
OBJ = $(SRC:.c=.o)
HEADER = push_swap.h
all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	  rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
