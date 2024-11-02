#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[i+j] && (i + j < len) && (little[j] == big[i + j]))
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	big[50] = "Hello my name is Stamatis";
	char	little[50] = "my";
	char	*p1;

	p1 = ft_strnstr(big, little, 8);
	if (p1 == NULL)
		printf("P1 is Null\n");
	else
		printf("%s\n", p1);
	return (0);
}