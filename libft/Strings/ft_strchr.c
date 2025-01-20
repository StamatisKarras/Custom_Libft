/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:07:36 by skarras           #+#    #+#             */
/*   Updated: 2025/01/20 13:25:22 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	l;
	char	*p;

	p = (char *) s;
	l = ft_strlen(p);
	i = 0;
	while (i < l + 1)
	{
		if (p[i] == c)
			return (&p[i]);
		i++;
	}
	return (NULL);
}
