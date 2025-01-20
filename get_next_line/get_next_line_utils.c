/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:35:10 by skarras           #+#    #+#             */
/*   Updated: 2025/01/20 10:40:14 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = (char *) malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	new_str = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (NULL);
	i = -1;
	if (s1)
		while (s1[++i])
			new_str[i] = s1[i];
	j = 0;
	while (s2[j])
		new_str[i++] = s2[j++];
	new_str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	free(s2);
	return (new_str);
}

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

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
