#include "libft.h"
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	t_size_t	i;
	char		*conv;

	i = 0;
	conv = (char *) s;
	while (i < n)
	{
		conv[i] = '\0';
		i++;
	}
}

int	main(void)
{
	char	myarr[20] = "Hello Everyone";
	char	arr[20] = "Hello Everyone";

	ft_bzero(myarr + 4, 5);
	bzero(arr + 4, 5);
	printf("%s\n", myarr);
	printf("%s\n", arr);
	return (0);
}