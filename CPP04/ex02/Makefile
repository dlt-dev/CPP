# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/29 13:02:42 by jdelattr          #+#    #+#              #
#    Updated: 2026/06/12 12:45:09 by jdelattr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AbstractClass
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC_DIR = ./src/
OBJ_DIR = ./objects/
INC_DIR = ./include/

SRC_FILES =	Brain.cpp WrongAnimal.cpp WrongCat.cpp Cat.cpp Dog.cpp Animal.cpp main.cpp

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
