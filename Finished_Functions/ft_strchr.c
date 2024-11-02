/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:07:36 by skarras           #+#    #+#             */
/*   Updated: 2024/10/31 16:22:48 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len(const char *string)
{
	size_t	count;

	count = 0;
	while (string[count])
		count++;
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	l;
	char	*p;

	p = (char *) s;
	l = len(p);
	i = 0;
	while (i < l + 1)
	{
		if (p[i] == c)
			return (&p[i]);
		i++;
	}
	return (NULL);
}
