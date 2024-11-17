# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 00:47:33 by mfaoussi          #+#    #+#              #
#    Updated: 2024/11/17 13:08:25 by mfaoussi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=			c++
NAME=		btc
CFLAGS=		-Wall -Wextra -Werror -std=c++11
SRCS=		main.cpp BitcoinExchange.cpp
OBJS = 		$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

# Compile the .cpp files into .o files with the flags
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus