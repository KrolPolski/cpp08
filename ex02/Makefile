# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/07 15:56:12 by rboudwin          #+#    #+#              #
#    Updated: 2025/01/08 14:27:01 by rboudwin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	:= mutantStack
CFLAGS  := -Wextra -Wall -Werror -std=c++11
SRCS	:= main.cpp
OBJS	:= ${SRCS:.cpp=.o}

all: $(NAME)

%.o: %.cpp
	@c++ $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	@c++ $(CFLAGS) $(OBJS) -o $(NAME) 

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: clean fclean all

.PHONY: all, clean, fclean, re