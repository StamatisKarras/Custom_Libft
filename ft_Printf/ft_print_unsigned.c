/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:44:17 by skarras           #+#    #+#             */
/*   Updated: 2025/01/20 13:23:30 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	print_usnigned(unsigned int n, int count)
{
	if (n >= 10)
		count += print_usnigned(n / 10, count);
	count += print_char(n % 10 + '0');
	return (count);
}
