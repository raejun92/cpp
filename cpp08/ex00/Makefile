NAME = ex00

OBJS = $(FILES:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main.cpp

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAGS) -o $@ $^

$(OBJS) : $(FILES)
	c++ $(FLAGS) -c $^

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all