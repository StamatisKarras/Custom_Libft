#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest_str, const void *src_str, size_t n)
{
	char		*dest;
	const char	*src;
	size_t	i;

	i = 0;
	dest = (char *) dest_str;
	src = (const char *) src_str;

	if (!src)
		return (dest);
	if (dest > src && dest < (src + n))
	{
		while (n--)
			dest[n] = src[n];
	}
	else
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}

int	main(void)
{
	char	mydest[] = "Hello World";
	char	dest[] = "Hello World";
	//int		intmydest[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	//int		intdest[] = {1,2,3,4,5,6,7,8,9,11,12,13,14,15,16};

	//ft_memmove(intmydest + 3, intmydest, 3);
	//memmove(intdest + 3, intdest, 3);
	ft_memmove(mydest + 6, mydest, 5);
	memmove(dest + 6, dest, 5);
	printf("Mydest: %s\n", mydest);
	printf("Dest: %s\n", dest);

	/*int	i;
	i = 0;
	while (intmydest[i])
	{
		printf("%d", intmydest[i++]);
	}
	printf("\n");
	i = 0;
	while (intdest[i])
	{
		printf("%d", intdest[i++]);
	}
	printf("\n");*/
	return (0);
}
