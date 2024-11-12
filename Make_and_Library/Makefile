NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I../Make_and_Library

HEADER = libft.h

Conv_Src = ../Convert/ft_atoi.c \
		  ../Convert/ft_itoa.c \
		  ../Convert/ft_tolower.c \
		  ../Convert/ft_toupper.c \

Is_Src = ../Is/ft_isalnum.c \
		 ../Is/ft_isalpha.c \
		 ../Is/ft_isascii.c \
		 ../Is/ft_isdigit.c \
		 ../Is/ft_isprint.c

List_Src = ../Lists/ft_lstnew_bonus.c \
		   ../Lists/ft_lstadd_front_bonus.c \
		   ../Lists/ft_lstsize_bonus.c \
		   ../Lists/ft_lstlast_bonus.c \
		   ../Lists/ft_lstadd_back_bonus.c \
		   ../Lists/ft_lstdelone_bonus.c

Memory_Src = ../Memory/ft_bzero.c \
			 ../Memory/ft_calloc.c \
			 ../Memory/ft_memchr.c \
			 ../Memory/ft_memcmp.c \
			 ../Memory/ft_memcpy.c \
			 ../Memory/ft_memmove.c \
			 ../Memory/ft_memset.c

Print_Src = ../Print/ft_putchar_fd.c \
			../Print/ft_putnbr_fd.c \
			../Print/ft_putstr_fd.c \
			../Print/ft_putendl_fd.c

Strings_Src = ../Strings/ft_split.c \
			  ../Strings/ft_strchr.c \
			  ../Strings/ft_strdup.c \
			  ../Strings/ft_striteri.c \
			  ../Strings/ft_strjoin.c \
			  ../Strings/ft_strlcat.c \
			  ../Strings/ft_strlcpy.c \
			  ../Strings/ft_strlen.c \
			  ../Strings/ft_strmapi.c \
			  ../Strings/ft_strncmp.c \
			  ../Strings/ft_strnstr.c \
			  ../Strings/ft_strrchr.c \
			  ../Strings/ft_strtrim.c \
			  ../Strings/ft_substr.c

SRC = $(Conv_Src) $(Is_Src) $(List_Src) $(Memory_Src) $(Print_Src) $(Strings_Src)

BONUS_OBJ = $(List_Src:.c=.o)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: .bonus

.bonus: $(OBJ) $(BONUS_OBJ)
		ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)
		@touch .bonus

clean:
	rm -f $(OBJ) $(BONUS_OBJ)
	rm -rf .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
