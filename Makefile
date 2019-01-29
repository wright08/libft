#/usr/bin/make -f

NAME = libft.a
AR = ar
ARFLAGS = -rcs
CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJ_DIR = obj

SRC = \
	  ft_atoi\
	  ft_putnbr\
	  ft_putstr\
	  ft_putchar\
	  ft_strcat\
	  ft_strcmp\
	  ft_strcpy\
	  ft_strlcat\
	  ft_strlcpy\
	  ft_strncat\
	  ft_strncmp\
	  ft_strncpy\
	  ft_strstr\
	  ft_strlen\
	  ft_isalpha\
	  ft_isdigit\
	  ft_isalnum\
	  ft_isascii\
	  ft_isprint\
	  ft_toupper\
	  ft_tolower\
	  ft_strnstr\
	  ft_strchr\
	  ft_strrchr\
	  ft_strdup\
	  ft_memset\
	  ft_bzero\
	  ft_memcpy\
	  ft_memccpy\
	  ft_memcmp\
	  ft_memchr\
	  ft_memmove\
	  ft_putendl\
	  ft_memalloc\
	  ft_memdel\
	  ft_strnew\
	  ft_strdel\
	  ft_strclr\
	  ft_striter\
	  ft_striteri\
	  ft_strmap\
	  ft_strmapi\
	  ft_strequ\
	  ft_strnequ\
	  ft_strsub\
	  ft_strjoin\
	  ft_strtrim

OBJ = $(patsubst %, $(OBJ_DIR)/%.o, $(SRC))

NC = \033[0m
GREEN = \033[1;32m
RED = \033[1;31m
YELLOW = \033[1;33m

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $@ $(OBJ)
	@echo "$(GREEN)DONE$(NC)"

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) removed$(NC)"

re: fclean all
