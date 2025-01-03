/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:44:51 by skarras           #+#    #+#             */
/*   Updated: 2024/11/26 14:35:50 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/Make_and_Library/libft.h"

int	ft_printf_normal(const char *s);
int	ft_printf(const char *s, ...);
int	sorting_hat(const char *s, va_list args);
int	print_char(int c);
int	putnbr_count(int n);
int	put_str_count(const char *s);
int	strlen_count(const char *s);
int	print_usnigned(unsigned int n, int count);
int	print_hex(unsigned long long nb, char type);
int	print_pointer(unsigned long nb, int count);
int	outoflines(const char *s, va_list args);

#endif
