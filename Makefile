NAME		= match

SRCS_LIB_PATH	= ./lib/my/

SRCS_LIB	= $(SRCS_LIB_PATH)my_strchr.c

SRCS_PATH	= ./source/

SRCS		= test_match.c \
		$(SRCS_MATCH)match.c

OBJS		= $(SRCS:.c=.o) \
		$(SRCS_LIB:.c=.o)

CC		= gcc

RM		= rm -f

CFLAGS += -Wextra -Wall -Werror
#CFLAGS += -ansi -pedantic
CFLAGS += -I./include

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
