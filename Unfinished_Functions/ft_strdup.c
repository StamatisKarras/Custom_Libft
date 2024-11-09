#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *) malloc(ft_strlen(s) + 1);
	if (p == NULL)
		return (NULL);
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*int	main(void)
{
	char	str[100] = "a";
	char	*myp;
	char	*p;

	myp = ft_strdup(str);
	p = strdup(str);
	printf("My dup: %s\nNormal duo: %s\n", myp, p);
	return (0);
}*/
