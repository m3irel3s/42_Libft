CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC_PATH = ./src

INC_PATH = ./inc

SRC = $(wildcard $(SRC_PATH))/*.c

INC = -I $(INC_PATH)

OBJ = $(SRC:.c=.o)

NAME = libft.a

all: $(NAME)

# Rule to create the library
$(NAME): $(OBJ)
	ar rcs $(NAME) $^

# Rule for creating object files
%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean 
	/bin/rm -f $(NAME)

re: fclean all
	/bin/rm -f $(NAME)
	
.PHONY: all clean fclean re