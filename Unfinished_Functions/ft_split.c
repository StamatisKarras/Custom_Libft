#include "libft.h"

size_t	ft_strnlen(const char *s, int c);
size_t	count_split(const char *s, char c);

size_t	ft_splitcpy(const char *string, char **parr,
					char delimiter, size_t count)
{
	size_t		q;
	size_t		temp_len;

	q = 0;
	while (q < count)
	{
		while (*string == delimiter)
			string++;
		temp_len = ft_strnlen(string, delimiter);
		parr[q] = (char *) malloc(temp_len * sizeof(char) + 1);
		if (!parr[q])
		{
			free(parr[q]);
			return (0);
		}
		ft_memcpy(parr[q], string, temp_len);
		parr[q][temp_len] = '\0';
		string = string + temp_len;
		q++;
	}
	return (q);
}

size_t	count_split(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if (s[0] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			count++;
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

size_t	ft_strnlen(const char *s, int c)
{
	size_t	count;

	count = 0;
	while (s[count] != c && s[count])
		count++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	size_t		count;
	size_t		q;

	count = count_split(s, c);
	res = (char **) malloc((count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	q = ft_splitcpy(s, res, c, count);
	res[q] = NULL;
	return (res);
}

int	main(void)
{
	char	**s;
	size_t	i;

	s = ft_split("Hello!Hello!HEllo", '!');
	i = 0;
	while (s[i])
	{
		printf("%s\n", s[i]);
		free(s[i]);
		i++;
	}
	free (s);
	return (0);
}
