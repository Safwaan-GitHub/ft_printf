NAME := libftprintf.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror -g
SRCS := ft_printf.c
OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	 $(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean, fclean, re, all
