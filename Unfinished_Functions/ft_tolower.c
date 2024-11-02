#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

int	main(void)
{
	char	c = ';';

	printf("Before: %c\n", c);
	printf("After: %c\n", ft_tolower(c));
	return (0);
}