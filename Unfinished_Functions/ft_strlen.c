#include <stdio.h>
#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *strn)
{
	size_t	i;

	i = 0;
	while (strn[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%ld\n", ft_strlen(argv[1]));
		printf("%ld\n", strlen(argv[1]));
	}
	return (0);
}
