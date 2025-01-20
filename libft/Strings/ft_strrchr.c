/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:33:31 by skarras           #+#    #+#             */
/*   Updated: 2025/01/20 13:25:22 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = ft_strlen(s);
	p = (char *) s;
	while (i > -1)
	{
		if (p[i] == c)
			return (&p[i]);
		i--;
	}
	return (NULL);
}
