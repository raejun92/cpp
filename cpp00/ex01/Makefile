NAME = phonebook

OBJS = $(FILES:.cpp=.o)
FLAGS = -Wall -Wextra -Werror
FILES = Contact.cpp main.cpp Phonebook.cpp

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all