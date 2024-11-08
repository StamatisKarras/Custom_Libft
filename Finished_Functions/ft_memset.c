/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:48:47 by skarras           #+#    #+#             */
/*   Updated: 2024/11/08 13:30:12 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t				i;
	unsigned char		*conv;

	conv = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		conv[i] = (unsigned char) c;
		i++;
	}
	return (conv);
}
