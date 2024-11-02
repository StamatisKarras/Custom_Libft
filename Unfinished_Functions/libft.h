#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

size_t	    ft_strlen(const char *strn);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int         ft_atoi(const char *str);


#endif