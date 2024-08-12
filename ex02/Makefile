# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/21 13:44:15 by mbernard          #+#    #+#              #
#    Updated: 2024/08/12 16:30:27 by mbernard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = c++
NAME = hi_brain
CFLAGS = -Wall -Wextra -Werror -std=c++98
MKDIR = mkdir -p
RMDIR = rm -rf

# ---------------------------------- Sources --------------------------------- #
SRCS = main

# ---------------------------------- Repertories ----------------------------- #
SRC_DIR = ./
OBJS_DIR = .objs/
OBJS = $(addprefix ${OBJS_DIR}, $(addsuffix .o, ${SRCS}))

# ---------------------------------- Compilation ----------------------------- #
all: ${NAME} ${OBJS} | ${OBJS_DIR} Makefile

${NAME}: ${OBJS} Makefile
	${C} ${CFLAGS} ${OBJS} ${INCLUDES} -o $@

${OBJS_DIR}%.o: ${SRC_DIR}%.cpp Makefile | ${OBJS_DIR}
	${C} ${CFLAGS} -c $< -o $@

# ---------------------------------- Create Repertory ---------------------- #
${OBJS_DIR}:
			${MKDIR} ${OBJS_DIR}

## ---------------------------------- Clean ----------------------------------- #
clean:
	${RMDIR} ${OBJS_DIR}

fclean: clean
	${RM} ${NAME}

re:    fclean
	${MAKE} ${NAME}

# ---------------------------------- Phony ----------------------------------- #
.PHONY: all clean fclean re
