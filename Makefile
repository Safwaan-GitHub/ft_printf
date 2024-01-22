NAME := libftprintf.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror -g -Iinclude
LIBFT := libft/libft.a
SRCS := src/ft_printf.c \
	src/print_digit.c \
	src/print_str.c \
	src/print_ptr.c
OBJS := $(SRCS:.c=.o)

GREEN := \033[0;32m
RED := \033[0;31m
ORANGE := \033[0;33m
NC := \033[0m

all: $(NAME)
	@echo "${GREEN}Compilation successful: $(NAME)${NC}"

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "${RED}Cleaned object files${NC}"

fclean: clean
	@rm -f $(NAME)
	@echo "${RED}Fully cleaned: $(NAME)${NC}"

re: fclean all
	@echo "${ORANGE}Recompiled everything${NC}"

.PHONY: clean, fclean, re, all
