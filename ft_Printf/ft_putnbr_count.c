/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:45:00 by skarras           #+#    #+#             */
/*   Updated: 2025/01/20 11:19:33 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr_count(int n)
{
	char	*str;
	int		count;

	str = my_itoa(n);
	if (!str)
		return (-1);
	count = ft_len(str);
	putstr_fd(str, 1);
	free(str);
	return (count);
}
