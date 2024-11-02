#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)p[i] == (unsigned char) c)
			return (&p[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	mystr[50] = "Hello Everyo;e";
	char	str[50] = "Hello Everyon;e";
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *) ft_memchr(mystr, 'E', 0);
	p2 = (unsigned char *) memchr(str, 'E', 0);
	if (p1 == NULL)
		printf("THe pointer is NULL\n");
	else	
		printf("The result is: %c\n", *p1);
	if (p2 == NULL)
		printf("THe pointer is NULL\n");
	else	
		printf("The result is: %c\n", *p2);
}