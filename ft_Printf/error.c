#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	i;

	i = ft_printf("%s\n", NULL);
	dprintf(2, "%d\n", i);
	return (0);
}
