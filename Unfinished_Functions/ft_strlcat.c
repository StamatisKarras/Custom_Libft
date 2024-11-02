#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	len(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	len_dst = len(dst);
	len_src = len(src);
	i = 0;
	if (size == 0)
		return (len_src);
	if (len_dst >= size)
		return (len_src + size);
	while (src[i] && (len_dst + i) < size - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

int	main(void)
{
	char	mydest[30] = "";
	char	mysrc[9] = "Stamatis";
	char	dest[30] = "";
	char	src[9] = "Stamatis";
	ft_strlcat(mydest, mysrc, 30);
	strlcat(dest, src, 30);
	printf("Mydest: %s\nMysrc: %s\n", mydest, mysrc);
	printf("dest: %s\nsrc: %s\n", dest, src);
}
