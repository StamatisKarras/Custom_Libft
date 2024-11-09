#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	sign = 0;
	res = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (sign == 1)
		res = -res;
	return (res);
}

int	main(void)
{
	printf("Test 1: %d\n", ft_atoi("\n\n\n  -46\b9 \n5d6"));
	printf("Test 1: %d\n", atoi("\n\n\n  -46\b9 \n5d6"));
	return (0);
}
