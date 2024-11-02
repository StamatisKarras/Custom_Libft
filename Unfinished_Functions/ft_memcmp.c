#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*s1_p;
	unsigned char	*s2_p;

	i = 0;
	s1_p = (unsigned char *) s1;
	s2_p = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (s1_p[i] == s2_p[i] && i < n - 1)
		i++;
	return (s1_p[i] - s2_p[i]);
}

int	main(void)
{
	char	mys1[30] = "abcdefg";
	char	mys2[30] = "abcdefg";
	char	s1[30] = "abcdefg";
	char	s2[30] = "abcdefg";

	printf("The result is: %d\n", ft_memcmp(mys1, mys2, 10));
	printf("The result is: %d\n", memcmp(s1, s2, 10));
}