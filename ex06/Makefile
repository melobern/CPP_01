# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/21 13:44:15 by mbernard          #+#    #+#              #
#    Updated: 2024/08/13 11:20:33 by mbernard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = c++
NAME = harlFilter
CFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98
MKDIR = mkdir -p
RMDIR = rm -rf

# ---------------------------------- Sources --------------------------------- #
HEADER = Harl
SRCS = main Harl

# ---------------------------------- Repertories ----------------------------- #
HEADERS_DIR = includes/
SRC_DIR = src/
OBJS_DIR = .objs/
OBJS = $(addprefix ${OBJS_DIR}, $(addsuffix .o, ${SRCS}))
HEADERS = $(addprefix ${HEADERS_DIR}, $(addsuffix .hpp, ${HEADERS_LIST}))
INCLUDES = -I ${HEADERS_DIR}
DEPS = ${OBJS:.o=.d}

# ---------------------------------- Compilation ----------------------------- #
all: ${NAME} ${OBJS} | ${OBJS_DIR} Makefile

${NAME}: ${OBJS} Makefile
	${C} ${CFLAGS} ${OBJS} ${INCLUDES} -o $@

${OBJS_DIR}%.o: ${SRC_DIR}%.cpp ${HEADERS} Makefile | ${OBJS_DIR}
	${C} ${CFLAGS} ${INCLUDES} -c $< -o $@

-include ${DEPS}
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
