#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	if (fd >= 0 && fd <= 2)
		write(fd, &c, 1);
}

/*int	main(void)
{
	ft_putchar_fd('a', 3);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
