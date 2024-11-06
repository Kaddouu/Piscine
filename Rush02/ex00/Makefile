# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 14:51:43 by kyang             #+#    #+#              #
#    Updated: 2024/10/06 22:20:20 by kyang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

CC = cc

SOURCES = *.c

CFLAGS = -Wall -Wextra -Werror

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

$(OBJECTS):
	$(CC) $(FLAGS) -c $(SOURCES) 

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
