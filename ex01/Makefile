# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/02 11:29:17 by rboudwin          #+#    #+#              #
#    Updated: 2025/01/02 15:56:49 by rboudwin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= Span
CFLAGS  := -Wextra -Wall -Werror -std=c++11
SRCS	:= main.cpp Span.cpp
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