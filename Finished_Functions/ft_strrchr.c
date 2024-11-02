/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:27:08 by skarras           #+#    #+#             */
/*   Updated: 2024/10/31 16:27:43 by skarras          ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = len(s);
	p = (char *) s;
	while (i > -1)
	{
		if (p[i] == c)
			return (&p[i]);
		i--;
	}
	return (NULL);
}
