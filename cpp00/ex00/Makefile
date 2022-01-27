NAME = megaphone

OBJS = $(FILES:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = megaphone.cpp

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all