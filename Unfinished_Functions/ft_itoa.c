#include "libft.h"

char	*allocation(int	len)
{
	char	*arr;

	arr = (char *) malloc((len + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	arr[0] = '0';
	return (arr);
}

int	count_n(int c)
{
	int		count;
	long	nbr;

	nbr = c;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		count = 1;
		nbr = -nbr;
	}
	else
		count = 0;
	while (nbr > 0)
	{
		count++;
		nbr = nbr / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*array;
	int		size;
	int		i;
	long	nbr;

	nbr = n;
	size = count_n(nbr);
	array = allocation(size);
	if (nbr < 0)
	{
		array[0] = '-';
		nbr = -nbr;
	}
	i = size - 1;
	while (nbr > 0)
	{
		array[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	array[size] = '\0';
	return (array);
}
int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}
