/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:29:52 by skarras           #+#    #+#             */
/*   Updated: 2025/01/20 13:25:22 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*n_string;

	i = 0;
	n_string = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!n_string)
		return (NULL);
	while (s[i])
	{
		n_string[i] = f(i, s[i]);
		i++;
	}
	n_string[i] = '\0';
	return (n_string);
}
