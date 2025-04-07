# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/07 15:32:30 by mlucena-          #+#    #+#              #
#    Updated: 2025/04/07 19:57:49 by mlucena-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = ./src
INCLUDE = ./include
OBJ = ./obj
MYSRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCFILE= $(addprefix $(SRC)/, $(MYSRC))
OBJFILES= $(addprefix $(OBJ)/, $(MYSRC:%.c=%.o))
all: $(NAME)

$(NAME): $(OBJ) | $(OBJFILES)
		ar rcs $(NAME) $(OBJFILES)

$(OBJ)/%.o: $(SRC)/%.c 
	$(CC) $(FLAGS) -c $< -I $(INCLUDE) -o $@

$(OBJ):
	mkdir -p $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all