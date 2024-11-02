#include "libft.h"

size_t	len(const char *string)
{
	size_t	count;
	
	count = 0;
	while (string[count])
		count++;
	return (count);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = len(s);
	p = (char *) s;
	while (i > -1)
	{
		if (p[i] == c)
			return (&p[i]);
		i--;
	}
	return (NULL);
}

int	main(void)
{
	char	mystring[100] = "LbbbbbbbbbbbbbbbbbbbbbThis Works";
	char	string[100] = "LbbbbbbbbbbbbbbbbbbbbbThis Works";
	char	*p1;
	char	*p2;

	p1 = ft_strrchr(mystring, '=');
	p2 = strrchr(string, '=');
	printf("This is the char: %s\n", p1);
	printf("This is the char: %s\n", p2);
	return (0);
}