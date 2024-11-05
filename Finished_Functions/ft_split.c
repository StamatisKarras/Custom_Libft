/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:27:26 by skarras           #+#    #+#             */
/*   Updated: 2024/11/05 14:27:33 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_split(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

size_t	ft_strnlen(const char *s, int c)
{
	size_t	count;

	count = 0;
	while (s[count] != c && s[count])
		count++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	size_t		count;
	size_t		q;
	size_t		temp_len;

	count = count_split(s, c);
	res = (char **) malloc((count + 1) * sizeof(char **));
	if (!res)
		return (NULL);
	q = 0;
	while (q < count)
	{
		while (*s == c)
			s++;
		temp_len = ft_strnlen(s, c);
		res[q] = (char *) malloc(temp_len * sizeof(char) + 1);
		if (!res[q])
			return (NULL);
		ft_strlcpy(res[q], s, temp_len);
		s = s + temp_len;
		q++;
	}
	res[q] = '\0';
	return (res);
}
