#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*n_string;

	n_string = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!n_string)
		return (NULL);
	while (s[i])
	{
		n_string[i] = f(i, s[i]);
		i++;
	}
	n_string[i] = '\0';
	return (n_string);
}

/*int	main(void)
{
	printf("%s\n", ft_strmapi("BBBBBBB", something));
	return (0);
}*/
