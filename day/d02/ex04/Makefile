# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/10 23:12:35 by mikim             #+#    #+#              #
#    Updated: 2018/01/11 20:25:23 by mikim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	  Fixed.class.cpp

OBJ = $(SRC:.cpp=.o)

SRCDIR = srcs/
OBJDIR = objs/

SRCS = $(addprefix $(SRCDIR), $(SRC))
OBJS = $(addprefix $(OBJDIR), $(OBJ))
HEADER = -I includes

CPP = g++
CFLAG = -c
WFLAG = -Wall -Wextra -Werror

NAME = eval_expr

.PHONY: all clean fclean re
.SUFFIXES: .c .o

all: $(NAME)

$(OBJDIR)%.o: $(SRCDIR)%.cpp
	@mkdir -p $(OBJDIR)
	@$(CPP) $(CFLAG) $(WFLAG) $(HEADER) $< -o $@

$(NAME): $(OBJS)
	@$(CPP) $(WFLAG) $(HEADER) $(OBJS) -o $@
	@echo "\x1b[32;1m[$(NAME) - 모래반지 빵야빵야!]\x1b[0m"

clean:
	@/bin/rm -rf $(OBJDIR)
	@echo "\x1b[35;1m[$(NAME) - clean]\x1b[0m"

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo "\x1b[31m[$(NAME) - fclean]\x1b[0m"

re: fclean all
