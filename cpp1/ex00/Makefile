# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 00:47:33 by mfaoussi          #+#    #+#              #
#    Updated: 2024/06/16 02:56:14 by mfaoussi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=			c++
NAME=		BraiiiiiiinnnzzzZ
CFLAGS=		-Wall -Wextra -Werror -std=c++98
SRCS=		main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS = 		$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
