#include "libft.h"

size_t	len(const char *string)
{
	size_t	count;

	count = 0;
	while (string[count])
		count++;
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	size_t	l;
	char	*p;

	p = (char *) s;
	l = len(p);
	i = 0;
	while (i < l + 1)
	{
		if (p[i] == c)
			return (&p[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	mystring[100] = "bbbbbbbbbbbbbbbbbbbbbbThis Works";
	char	string[100] = "bbbbbbbbbbbbbbbbbbbbbbThis Works";
	char	*p1;
	char	*p2;

	p1 = ft_strchr(mystring, 'W');
	p2 = strchr(string, 'W');
	printf("This is the char: %s\n", p1);
	printf("This is the char: %s\n", p2);
	return (0);
}*/
