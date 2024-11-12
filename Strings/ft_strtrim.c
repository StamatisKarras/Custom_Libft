/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:50:06 by skarras           #+#    #+#             */
/*   Updated: 2024/11/04 14:54:23 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char		*end;
	size_t			size;
	char			*string;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = s1 + ft_strlen(s1) - 1;
	while (s1 < end && ft_strchr(set, *end))
		end--;
	size = (end - s1) + 1;
	string = (char *) malloc((size + 1) * sizeof(char));
	if (!string)
		return (NULL);
	ft_memcpy(string, s1, size);
	string[size] = '\0';
	return (string);
}
