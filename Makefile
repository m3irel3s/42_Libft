# Compiler and flags
CC      = cc
CFLAGS  = -Wall -Wextra -Werror -I$(INC_DIR) -I$(LIBFT_PATH)inc -I$(PRINTF_PATH)inc -I$(GNL_PATH)inc

# Paths
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc

LIBFT_PATH  = FT_Libft/
PRINTF_PATH = FT_Printf/
GNL_PATH    = Get_next_line/

# Source files
FT_LIBFT_SRC = $(addprefix $(LIBFT_PATH)src/, \
    ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
    ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
    ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
    ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
    ft_strrchr.c ft_strnstr.c ft_strtrim.c ft_substr.c ft_tolower.c \
    ft_toupper.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
    ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_split.c ft_putchar.c \
	ft_min_max.c)

FT_PRINTF_SRC = $(addprefix $(PRINTF_PATH)src/, \
    ft_printf.c ft_print_char.c ft_print_str.c ft_print_digit.c \
    ft_print_address.c)

GET_NEXT_LINE_SRC = $(addprefix $(GNL_PATH)src/, \
    get_next_line.c get_next_line_utils.c)

# Object files
SRC = $(FT_LIBFT_SRC) $(FT_PRINTF_SRC) $(GET_NEXT_LINE_SRC)
OBJ = $(patsubst %.c, $(OBJ_DIR)/%.o, $(notdir $(SRC)))

# Archive name
NAME = libft.a

# Colors for output
CYAN    = \033[1;36m
WHITE   = \033[1;37m
DIM     = \033[2m
RESET   = \033[0m

# Build rules
all: $(NAME)

$(NAME): $(OBJ)
	@printf "\n"
	@ar rcs $(NAME) $(OBJ)
	@echo "$(CYAN)Archive created: $(WHITE)$(NAME)$(RESET)"

$(OBJ_DIR)/%.o: $(LIBFT_PATH)src/%.c | $(OBJ_DIR)
	@printf "$(CYAN)Compiling: $(WHITE)%-30s$(RESET)\r" $(notdir $<)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(PRINTF_PATH)src/%.c | $(OBJ_DIR)
	@printf "$(CYAN)Compiling: $(WHITE)%-30s$(RESET)\r" $(notdir $<)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(GNL_PATH)src/%.c | $(OBJ_DIR)
	@printf "$(CYAN)Compiling: $(WHITE)%-30s$(RESET)\r" $(notdir $<)
	@$(CC) $(CFLAGS) -c $< -o $@

# Ensure obj directory exists when needed
$(OBJ_DIR):
	@mkdir -p $@

# Cleaning
clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(CYAN)Cleaned:$(WHITE) object files$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(CYAN)Fully cleaned:$(WHITE) $(NAME) removed$(RESET)"

re: fclean all

.PHONY: all clean fclean re
