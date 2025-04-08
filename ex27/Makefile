# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 20:55:02 by mlucena-          #+#    #+#              #
#    Updated: 2025/04/08 21:33:32 by mlucena-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = cc
FLAGS = -Wall -Wextra -Werror
DISP = ft_display_file.c
NAMEO = $(DISP:.c=.o)

all: $(NAME)

$(NAME): $(NAMEO)
	$(CC) $(FLAGS) -o $@ $<

clean:
	rm -rf $(NAMEO)

fclean: clean
	rm -rf $(NAME)

re: fclean all