/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarras <skarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:53:56 by skarras           #+#    #+#             */
/*   Updated: 2024/11/08 14:39:39 by skarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *strn)
{
	size_t	i;

	if (!strn)
		return (0);
	i = 0;
	while (strn[i])
		i++;
	return (i);
}
