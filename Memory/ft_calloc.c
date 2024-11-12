/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:13:15 by skarras           #+#    #+#             */
/*   Updated: 2024/11/10 21:07:51 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;
	size_t	total;
	size_t	i;

	i = 0;
	total = nmemb * size;
	if (total > 0 && size > 0 && total >= (18446744073709551615UL / size))
		return (NULL);
	p = (void *) malloc(total);
	if (!p)
		return (NULL);
	while (i < total)
		p[i++] = 0;
	return (p);
}
