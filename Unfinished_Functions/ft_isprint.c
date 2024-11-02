#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (16384);
	return (0);
}

int	main(void)
{
	int	c = 31;
	printf("%d\n", isprint(c));
	printf("%d\n", ft_isprint(c));
	return (0);
}