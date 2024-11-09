#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && i < n - 1)
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int	main(void)
{
	char	mys1[30] = "test\200";
	char	mys2[30] = "test\0";
	char	s1[30] = "test\200";
	char	s2[30] = "test\0";

	printf("The result is: %d\n", ft_strncmp(mys1, mys2, 4));
	printf("The result is: %d\n", strncmp(s1, s2, 4));
}
