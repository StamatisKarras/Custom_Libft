#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	mys1[30] = "b";
	char	mys2[30] = "a";
	char	s1[30] = "b";
	char	s2[30] = "a";

	printf("The result is: %d\n", ft_strncmp(mys1, mys2, 1));
	printf("The result is: %d\n", strncmp(s1, s2, 1));
}