#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*conv;

	conv = (char *) str;
	i = 0;
	while (i < n)
	{
		conv[i] = c;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	arr[20] = "Hello Everyone";
	char	myarr[20] = "Hello Everyone";
	
	ft_memset(myarr + 5, 'a', 10);
	memset(arr + 5, 'a', 10);
	printf("%s\n", myarr);
	printf("%s\n", arr);
	return (0);
}