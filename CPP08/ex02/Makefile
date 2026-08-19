# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/15 18:05:04 by jdelattr          #+#    #+#              #
#    Updated: 2026/08/16 19:08:49 by jdelattr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutatedAbomination
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC_DIR = ./src/
OBJ_DIR = ./objects/
INC_DIR = ./include/

SRC_FILES = main.cpp

OBJ = $(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))

all: $(NAME)

$(NAME) : $(OBJ) | $(OBJ_DIR)
	@echo "$(GREEN)$(NAME) compiled!$(DEFAULT)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp | $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
