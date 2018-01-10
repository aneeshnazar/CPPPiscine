NAME= ft_cat
CC=clang++
FLAGS= -Wall -Werror -Wextra
FILES= main
SRC=$(patsubst %, %.cpp, $(FILES))
OBJ=$(patsubst %, %.o, $(FILES))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(OBJ): $(SRC)
	$(CC) $(FLAGS) $(SRC) -c

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
