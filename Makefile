NAME    = libft.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror -I. -I$(INC_DIR) -I$(LIBFT_PATH)inc -I$(PRINTF_PATH)inc -I$(GNL_PATH)inc

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc

LIBFT_PATH = FT_Libft/
PRINTF_PATH = FT_Printf/
GNL_PATH = Get_next_line/

FT_LIBFT_SRC = $(addprefix $(LIBFT_PATH)src/, \
    ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
    ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
    ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
    ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
    ft_strrchr.c ft_strnstr.c ft_strtrim.c ft_substr.c ft_tolower.c \
    ft_toupper.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
    ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_split.c ft_putchar.c)

FT_PRINTF_SRC = $(addprefix $(PRINTF_PATH)src/, \
    ft_printf.c ft_print_char.c ft_print_str.c ft_print_digit.c \
    ft_print_address.c)

GET_NEXT_LINE_SRC = $(addprefix $(GNL_PATH)src/, \
    get_next_line.c get_next_line_utils.c)

SRC = $(FT_LIBFT_SRC) $(FT_PRINTF_SRC) $(GET_NEXT_LINE_SRC)

OBJ = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:%.c=%.o)))

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(LIBFT_PATH)src/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(PRINTF_PATH)src/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(GNL_PATH)src/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
