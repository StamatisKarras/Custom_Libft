#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isascii(15));
	printf("%d\n", isascii(15));
	return (0);
}