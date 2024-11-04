#include "libft.h"
#include <stdio.h>
#include <string.h>
void	*ft_memcpy(void *dest_str, const void * src_str, size_t n)
{
	size_t	i;
	char	*dest;
	char	*src;

	dest = (char *) dest_str;
	src = (char *) src_str;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest_str);
}

/*int	main(void)
{
	char	Mydest[20] = "Hello0000 People";
	char	Mysrc[20] = "This is now my array";
	char	dest[20] = "Hello0000 People";
	char	src[20] = "This is now my array";

	ft_memcpy(Mydest, Mysrc, 20);
	memcpy(dest, src, 20);
	printf("MyDest: %s\n", Mydest);
	printf("MySrc: %s\n", Mysrc);
	printf("Dest: %s\n", dest);
	printf("Src: %s\n", src);
	return (0);
}*/
