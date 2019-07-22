# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pitsai <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/27 11:31:09 by pitsai            #+#    #+#              #
#    Updated: 2019/06/18 15:46:54 by pitsai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror -c
FILE := $(wildcard ft_*.c)
OBJ = $(FILE:%.c=%.o) #everything in File, but change .c to .o

.PHONY: clean

all: $(NAME)

$(NAME): $(OBJ) #libft.a: ft_atoi.o
	@ar rcs $(NAME) $(OBJ)
	@echo "Panda built a bunny"
$(OBJ): $(FILE)
	@gcc $(FLAGS) $(FILE)

clean:
	@rm -f $(OBJ)
	@echo "Panda ate a bunny"
fclean: clean
	@rm -f $(NAME)
	@echo "Panda laid schematics for a bunny"
re: fclean all
