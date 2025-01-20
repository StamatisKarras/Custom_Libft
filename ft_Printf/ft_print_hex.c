/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:38:35 by skarras           #+#    #+#             */
/*   Updated: 2025/01/20 13:21:45 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	print_hex(unsigned long long nb, char type)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += print_hex(nb / 16, type);
		count += print_hex(nb % 16, type);
	}
	else
	{
		if (nb < 10)
			count += print_char(nb + '0');
		else
		{
			if (type == 'x')
				count += print_char((nb - 10) + 'a');
			else if (type == 'X')
				count += print_char((nb - 10) + 'A');
		}
	}
	return (count);
}
