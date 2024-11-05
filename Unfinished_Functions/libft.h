/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:49:33 by skarras           #+#    #+#             */
/*   Updated: 2024/11/05 13:58:02 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
#include <ctype.h>
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
void		ft_putstr_fd(char *s, int fd);
void		ft_putchar_fd(char c, int fd);
char		*ft_strchr(const char *s, int c);
size_t		ft_strlen(const char *strn);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
void		*ft_memset(void *str, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest_str, const void *src_str, size_t n);
void		*ft_memmove(void *dest_str, const void *src_str, size_t n);
char		*ft_substr(char const *s, unsigned int start, size_t len);

#endif
