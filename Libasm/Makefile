# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jobenass <jobenass@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/20 17:16:39 by jobenass          #+#    #+#              #
#    Updated: 2020/07/08 22:17:14 by jobenass         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME				=	exe

CC					=	gcc
CFLAGS				=	-Wall -Wextra -Werror
RM					=	rm -rf

DIR_INCS			=	./incs
INCS				=	$(addprefix $(DIR_INCS)/, test.h)

DIR_SRCS			=	./srcs
SRCS				=	$(addprefix $(DIR_SRCS)/, main.c utils.c read.c strcmp.c strcpy.c strdup.c strlen.c write.c)

OBJS				=	$(subst .c,.o,$(SRCS))

$(DIR_SRCS)%.o 		:	$(DIR_SRCS)%.c
						$(CC) $(CFLAGS) $^ -c

all					:	$(NAME)

$(OBJS)				:	$(INCS)

$(NAME)				:	$(OBJS)
						$(CC) $(CFLAGS) $(OBJS) -no-pie ../libasm.a -o $(NAME)
						$(MAKE) readme

clean				:
						$(RM) $(DIR_SRCS)/*.o

fclean				:	clean
						$(RM) $(NAME)

re					:	fclean all

readme				:
						@echo "";
						@echo "\033[0;33m╦ ╦╔═╗╦ ╦  ╔╦╗╔═╗╔═╗╔╦╗╔═╗  ╦ ╦╔═╗╦═╗╦╔═╔═╗";
						@echo "\033[0;33m╠═╣║ ║║║║   ║ ║╣ ╚═╗ ║ ╚═╗  ║║║║ ║╠╦╝╠╩╗╚═╗";
						@echo "\033[0;33m╩ ╩╚═╝╚╩╝   ╩ ╚═╝╚═╝ ╩ ╚═╝  ╚╩╝╚═╝╩╚═╩ ╩╚═╝ (libasm tester)";
						@echo "";
						@echo "\033[1;32m> Execution form:";
						@echo "\033[0;37m./tests/exe <name_function> <version> <arguments...>"
						@echo "";
						@echo "\033[1;35m> Keywords:"
						@echo "\033[0;37m- name_functions: strlen, strcmp, strcpy, strdup, write, read";
						@echo "\033[0;37m- versions: off, cpy";
						@echo "\033[0;37m- arguments: depends offcial functions...";
						@echo "";
						@echo "\033[1;31m> IMPORTANT";
						@echo "\033[1;37m- If you need to send a null pointer in argument, write NULL.";
						@echo "- For use file descriptor of file.txt use FD, else give another value in argument.";
						@echo "";
						@echo "\033[1;34m> Examples:"
						@echo "\033[0;37m./tests/exe strlen off Salut_a_toi_l\'amis!";
						@echo "\033[0;37m./tests/exe strcpy cpy NULL \"Ca va segfault!\"";
						@echo "\033[0;37m./tests/exe write cpy FD "Abcdefghij" -10";
						@echo "\033[0;37m./tests/exe read off -50 NULL 10";
						@echo "";
						@echo "\033[1;32mThanx and have fun!";
						@echo "\033[0;37m";

.PHONY				:	all clean fclean re readme
