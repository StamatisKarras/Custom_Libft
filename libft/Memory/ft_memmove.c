/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:35:01 by skarras           #+#    #+#             */
/*   Updated: 2025/01/20 13:25:22 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memmove(void *dest_str, const void *src_str, size_t n)
{
	char		*dest;
	const char	*src;
	size_t		i;

	i = 0;
	dest = (char *) dest_str;
	src = (const char *) src_str;
	if (!src)
		return (dest);
	if (dest > src && dest < (src + n))
	{
		while (n--)
			dest[n] = src[n];
	}
	else
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
