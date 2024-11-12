/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:27:26 by skarras           #+#    #+#             */
/*   Updated: 2024/11/11 12:11:34 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		ft_memcpy(parr[q], string, temp_len);
		parr[q][temp_len] = '\0';
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
	while (s[i])
	{
		if (ft_strnlen(&s[i], c) > 0)
		{
			count++;
			i = i + ft_strnlen(&s[i], c) - 1;
		}
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

	if (!s)
		return (NULL);
	count = count_split(s, c);
	res = (char **) malloc((count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	q = ft_splitcpy(s, res, c, count);
	res[q] = NULL;
	return (res);
}
