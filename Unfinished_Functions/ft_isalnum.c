#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 48 && c <= 57)
		return (8);
	else if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (8);
	else
		return (0);
}

int	main(void)
{
	printf("isalnum: %d\n", isalnum(127));
	printf("My function: %d\n", ft_isalnum(127));
}