/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:14:11 by skarras           #+#    #+#             */
/*   Updated: 2025/01/20 11:21:05 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_len(const char *strn)
{
	size_t	i;

	if (!strn)
		return (0);
	i = 0;
	while (strn[i])
		i++;
	return (i);
}

char	*ft_allocation(int len)
{
	char	*arr;

	arr = (char *) malloc((len + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	arr[0] = '0';
	return (arr);
}

int	ft_count_n(int c)
{
	int		count;
	long	nbr;

	nbr = c;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		count = 1;
		nbr = -nbr;
	}
	else
		count = 0;
	while (nbr > 0)
	{
		count++;
		nbr = nbr / 10;
	}
	return (count);
}

char	*my_itoa(int n)
{
	char	*array;
	int		size;
	int		i;
	long	nbr;

	nbr = n;
	size = ft_count_n(nbr);
	array = ft_allocation(size);
	if (nbr < 0)
	{
		array[0] = '-';
		nbr = -nbr;
	}
	i = size - 1;
	while (nbr > 0)
	{
		array[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	array[size] = '\0';
	return (array);
}

void	putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
