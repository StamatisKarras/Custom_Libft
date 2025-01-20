NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_PATH)/Library

HEADER = $(LIBFT_PATH)/Library/ \
		 $(GNT_PATH) \
		 $(PRINTF_PATH)

GNT_PATH = ./get_next_line/

LIBFT_PATH = ./libft

PRINTF_PATH = ./ft_Printf/

Conv_Src = $(LIBFT_PATH)/Convert/ft_atoi.c \
		  $(LIBFT_PATH)/Convert/ft_itoa.c \
		  $(LIBFT_PATH)/Convert/ft_tolower.c \
		  $(LIBFT_PATH)/Convert/ft_toupper.c \

Is_Src = $(LIBFT_PATH)/Is/ft_isalnum.c \
		 $(LIBFT_PATH)/Is/ft_isalpha.c \
		 $(LIBFT_PATH)/Is/ft_isascii.c \
		 $(LIBFT_PATH)/Is/ft_isdigit.c \
		 $(LIBFT_PATH)/Is/ft_isprint.c

List_Src = $(LIBFT_PATH)/Lists/ft_lstnew_bonus.c \
		   $(LIBFT_PATH)/Lists/ft_lstadd_front_bonus.c \
		   $(LIBFT_PATH)/Lists/ft_lstsize_bonus.c \
		   $(LIBFT_PATH)/Lists/ft_lstlast_bonus.c \
		   $(LIBFT_PATH)/Lists/ft_lstadd_back_bonus.c \
		   $(LIBFT_PATH)/Lists/ft_lstdelone_bonus.c

Memory_Src = $(LIBFT_PATH)/Memory/ft_bzero.c \
			 $(LIBFT_PATH)/Memory/ft_calloc.c \
			 $(LIBFT_PATH)/Memory/ft_memchr.c \
			 $(LIBFT_PATH)/Memory/ft_memcmp.c \
			 $(LIBFT_PATH)/Memory/ft_memcpy.c \
			 $(LIBFT_PATH)/Memory/ft_memmove.c \
			 $(LIBFT_PATH)/Memory/ft_memset.c

Print_Src = $(LIBFT_PATH)/Print/ft_putchar_fd.c \
			$(LIBFT_PATH)/Print/ft_putnbr_fd.c \
			$(LIBFT_PATH)/Print/ft_putstr_fd.c \
			$(LIBFT_PATH)/Print/ft_putendl_fd.c

Strings_Src = $(LIBFT_PATH)/Strings/ft_split.c \
			  $(LIBFT_PATH)/Strings/ft_strchr.c \
			  $(LIBFT_PATH)/Strings/ft_strdup.c \
			  $(LIBFT_PATH)/Strings/ft_striteri.c \
			  $(LIBFT_PATH)/Strings/ft_strjoin.c \
			  $(LIBFT_PATH)/Strings/ft_strlcat.c \
			  $(LIBFT_PATH)/Strings/ft_strlcpy.c \
			  $(LIBFT_PATH)/Strings/ft_strlen.c \
			  $(LIBFT_PATH)/Strings/ft_strmapi.c \
			  $(LIBFT_PATH)/Strings/ft_strncmp.c \
			  $(LIBFT_PATH)/Strings/ft_strnstr.c \
			  $(LIBFT_PATH)/Strings/ft_strrchr.c \
			  $(LIBFT_PATH)/Strings/ft_strtrim.c \
			  $(LIBFT_PATH)/Strings/ft_substr.c

Get_next_line_Src = $(GNT_PATH) get_next_line.c \
					$(GNT_PATH) get_next_line_utils.c

Printf_Src = $(PRINTF_PATH)ft_print_char.c \
			 $(PRINTF_PATH)ft_printf.c \
			 $(PRINTF_PATH)ft_printf_normal.c \
			 $(PRINTF_PATH)ft_printf_utils.c \
			 $(PRINTF_PATH)ft_print_hex.c \
			 $(PRINTF_PATH)ft_print_pointer.c \
			 $(PRINTF_PATH)ft_print_unsigned.c \
			 $(PRINTF_PATH)ft_putnbr_count.c \
			 $(PRINTF_PATH)ft_putstr_count.c \
			 $(PRINTF_PATH)ft_strlen_count.c

SRC = $(Conv_Src) $(Is_Src) $(List_Src) $(Memory_Src) $(Print_Src) $(Strings_Src) $(Print_Src)

BONUS_OBJ = $(List_Src:.c=.o)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: .bonus

.bonus: $(OBJ) $(BONUS_OBJ)
		@ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)
		@touch .bonus

clean:
	@rm -f $(OBJ) $(BONUS_OBJ)
	@rm -rf .bonus

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
