/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:27:26 by skarras           #+#    #+#             */
/*   Updated: 2024/11/05 16:16:32 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *s, int c);
size_t	count_split(const char *s, char c);

size_t	ft_splitcpy(const char *string, char **parr,
					char delimiter, size_t count)
{
	size_t		q;
	size_t		temp_len;

	q = 0;
	while (q < count)
	{
		while (*string == delimiter)
			string++;
		temp_len = ft_strnlen(string, delimiter);
		parr[q] = (char *) malloc(temp_len * sizeof(char) + 1);
		if (!parr[q])
		{
			free(parr[q]);
			return (0);
		}
		ft_strlcpy(parr[q], string, temp_len);
		string = string + temp_len;
		q++;
	}
	return (q);
}

size_t	count_split(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if (s[0] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	if (s[i - 1] != c)
		count++;
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

	count = count_split(s, c);
	res = (char **) malloc((count + 1) * sizeof(char **));
	if (!res)
	{
		free(res);
		return (NULL);
	}
	q = ft_splitcpy(s, res, c, count);
	res[q] = '\0';
	return (res);
}
