#include "libft.h"

int	main(void)
{
	printf("+------------------------------------------------+\n"
			"|                                                |\n"
			"|                 ft_atoi tests                  |\n"
			"|                                                |\n"
			"+------------------------------------------------+\n");
	printf("Test 1: %d\n", ft_atoi("0"));
	printf("Test 2: %d\n", ft_atoi("5"));
	printf("Test 3: %d\n", ft_atoi("15"));
	printf("Test 4: %d\n", ft_atoi("1546346"));
	printf("Test 5: %d\n", ft_atoi("-5"));
	printf("Test 6: %d\n", ft_atoi("-15"));
	printf("Test 7: %d\n", ft_atoi("-1546346"));
	printf("Edge case 1: %d\n", ft_atoi("2147483647"));
	printf("Edge case 1: %d\n", ft_atoi("-2147483648"));
	return (0);
}
