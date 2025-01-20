/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_normal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:44:32 by skarras           #+#    #+#             */
/*   Updated: 2025/01/20 13:23:30 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_printf_normal(const char *s)
{
	int	i;
	int	temp;

	i = 0;
	while (s[i] && s[i] != '%')
	{
		temp = print_char(s[i]);
		if (temp == -1)
			return (-1);
		i++;
	}
	return (i);
}
