#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (str[0] == '-')
		res = - res;
	return (res);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("The number is: %d\n", ft_atoi(argv[1]));
		printf("The number is: %d\n", atoi(argv[1]));
	}
	else
		printf("More inputs than expected\n");
	return (0);
}*/