#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	else
		return (0);
}

int main(void)
{
	printf("%d\n", isdigit(23532));
	printf("%d\n", ft_isdigit(23532));
	return (0);
}