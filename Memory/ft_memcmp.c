/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:01:34 by skarras           #+#    #+#             */
/*   Updated: 2024/10/31 18:01:42 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_p;
	unsigned char	*s2_p;

	i = 0;
	s1_p = (unsigned char *) s1;
	s2_p = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (s1_p[i] == s2_p[i] && i < n - 1)
		i++;
	return (s1_p[i] - s2_p[i]);
}
