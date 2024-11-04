#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	total;
	int		i;
	int		j;

	total = ft_strlen(s1) + ft_strlen(s2);
	nstr = (char *) malloc(total + 1);
	if (!nstr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		nstr[i++] = s2[j++];
	nstr[i] = '\0';
	return (nstr);
}

int	main(void)
{
	printf("Joined string: %s\n", ft_strjoin("", "Stamatis"));
	return (0);
}