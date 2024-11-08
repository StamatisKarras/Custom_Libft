#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!src || size == 0)
		return (ft_strlen(src));
	else
	{
		while (src[i] && i < size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (ft_strlen(src));
	}
}

/*int	main(void)
{
	char	Mydest[30] = "123";
	char	Mysrc[30] = "lorem ipsum dolor sit amet";
	char	dest[30] = "123";
	char	src[30] = "";

	ft_strlcpy(Mydest, Mysrc, 0);
	strlcpy(dest, src, 0);
	printf("%ld\n", ft_strlen(Mydest));
	printf("%ld\n", ft_strlen(dest));
	printf("MyDest: %s\nMySource: %s\n", Mydest, Mysrc);
	printf("Dest: %s\nSource: %s\n", dest, src);
	return (0);
}*/
