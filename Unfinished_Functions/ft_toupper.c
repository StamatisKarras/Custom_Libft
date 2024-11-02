#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

int	main(void)
{
	char	c = 'A';

	printf("Before: %c\n", c);
	printf("After: %c\n", ft_toupper(c));
	return (0);
}