NAME = megaphone

OBJS = $(FILES:.c=.o)
CFLAGS = -Wall -Wextra -Werror
FILES = megaphone.cpp

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	clang++ $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all