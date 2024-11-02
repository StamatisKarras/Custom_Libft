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

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (src[i] == '\0')
	{
		dst[i] = '\0';
		return (0);
	}
	else
	{
		while (i < size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (len(src));
	}
}

int	main(void)
{
	char	Mydest[30] = "123";
	char	Mysrc[30] = "Hello everyone";
	char	dest[30] = "123";
	char	src[30] = "Hello EVeryone";

	ft_strlcpy(Mydest, Mysrc, 12);
	strlcpy(dest, src, 12);
	printf("MyDest: %s\nMySource: %s\n", Mydest, Mysrc);
	printf("Dest: %s\nSource: %s\n", dest, src);
	return (0);
}