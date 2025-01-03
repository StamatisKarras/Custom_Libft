CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar rcs

NAME = libftprintf.a

HEADER = ft_printf.h

LIBFT = ./libft/Make_and_Library/libft.a

LIBFTLOC = ./libft/Make_and_Library/

SRC = ft_print_char.c \
	  ft_printf_normal.c \
	  ft_printf.c \
	  ft_putnbr_count.c \
	  ft_strlen_count.c \
	  ft_putstr_count.c \
	  ft_print_unsigned.c \
	  ft_print_hex.c \
	  ft_print_pointer.c

OBJ = $(SRC:.c=.o)

.SILENT:

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	cp $(LIBFT) .
	mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJ)
	echo "Library is workies"

$(LIBFT):
	$(MAKE) -C $(LIBFTLOC)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	$(MAKE) -C $(LIBFTLOC) clean
	echo "Cleaning has been completed"

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFTLOC) fclean
	echo "Thorough cleaning has been completed"

re: all

.PHONY: all clean fclean re
