#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;
	size_t	total;
	size_t	i;

	total = nmemb * size;
	if (total > 0 && size > 0 && total >= (18446744073709551615UL / size))
		return (NULL);
	p = (void *) malloc(total);
	if (!p)
		return (NULL);
	while (i < nmemb)
		p[i++] = 0;
	return (p);
}
