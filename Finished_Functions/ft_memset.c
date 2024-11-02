/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:48:47 by skarras           #+#    #+#             */
/*   Updated: 2024/11/01 16:35:12 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t		i;
	char		*conv;

	conv = (char *) str;
	i = 0;
	while (i < n)
	{
		conv[i] = c;
		i++;
	}
	return (0);
}
