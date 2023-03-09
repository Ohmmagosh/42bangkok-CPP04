# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 22:53:46 by psuanpro          #+#    #+#              #
#    Updated: 2023/03/10 00:16:28 by psuanpro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 22:53:46 by psuanpro          #+#    #+#              #
#    Updated: 2023/03/09 23:20:27 by psuanpro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interface&recap
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98


SRCS = main.cpp \


OBJS = $(SRCS:.cpp=.o)

OBJ_DIR = obj
OBJ := $(addprefix $(OBJ_DIR)/, $(OBJS))
HEADER = IMateriaSource.hpp

BRED =\033[1;31m
BGRN =\033[1;32m
BYEL =\033[1;33m
RES = \033[0m

COMPILE = echo "$(BGRN)$(NAME) compiled....$(RES)"
CLEAN = echo "$(BYEL)$(NAME) clean....$(RES)"
FCLEAN = echo "$(BRED)$(NAME) fclean....$(RES)"

$(OBJ_DIR)/%.o:%.cpp $(HEADER)
	@mkdir -p $(OBJ_DIR)
	@$(CC) -g $(CLAFGS) -c $< -o $@

all:$(NAME)

$(NAME): $(OBJ)
	@$(CC) -g $(CFLAGS) $(OBJ) -o $@
	@$(COMPILE)

clean:
	@rm -rf $(OBJ_DIR)
	@$(CLEAN)

fclean: clean
	@rm -rf $(NAME)
	@$(FCLEAN)

re: fclean all

.PHONY: all clean fclean re