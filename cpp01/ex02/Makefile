SRCS	= main.cpp

DIR_SRC = sources/

OBJ	= ${SRCS:.cpp=.o}

DIR_OBJ = sources/objs/

OBJS=$(addprefix $(DIR_OBJ), $(OBJ))

DEP	= ${SRCS:.cpp=.d}

DEPS = $(addprefix $(DIR_OBJ), $(DEP))

NAME	= ref

CC	= c++

CFLAGS	= -MMD -Wall -Wextra -Werror -g -std=c++98

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:	${NAME}

clean:
		rm -f ${OBJS} ${DEPS}

fclean:	
		rm -f ${NAME}
		rm -f ${OBJS} $(DEPS)

re:		fclean
		make all

do : 	all
		./${NAME}

$(DIR_OBJ)%.o: $(DIR_SRC)%.cpp
				$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re ac do

-include $(DEPS)