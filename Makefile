# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/21 17:17:29 by dbouizem          #+#    #+#              #
#    Updated: 2025/07/17 18:13:18 by dbouizem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
TEST = program
CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFT_PATH = libft
LIBFT_LIB = $(LIBFT_PATH)/libft.a

SRCS = \
	ft_printf.c \
	parse_format.c \
	ft_print_char.c \
	ft_print_str.c \
	ft_print_ptr.c \
	ft_print_int.c \
	ft_print_u_int.c \
	ft_print_hex.c \

OBJS = $(SRCS:.c=.o)

TEST_SRC = main.c

TEST_OBJ = $(TEST_SRC:.c=.o)

all: $(NAME)

$(LIBFT_LIB):
	@$(MAKE) -C $(LIBFT_PATH)

$(NAME): $(LIBFT_LIB) $(OBJS)
	@cp $(LIBFT_LIB) $(NAME)
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)

$(TEST) : $(TEST_OBJ) $(NAME)
	$(CC) $(CFLAGS) -g $(TEST_OBJ) -L. -lftprintf -o $(TEST)

%.o: %.c
	$(CC) $(CFLAGS) -I. -I$(LIBFT_PATH) -c $< -o $@

clean:
	@rm -f $(OBJS) $(TEST_OBJ)
	@$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	@rm -f $(NAME) $(TEST)
	@$(MAKE) -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all bonus clean fclean re

