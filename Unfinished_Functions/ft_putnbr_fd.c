#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (fd >= 0 && fd <= 2)
	{
		if (n == -2147483648)
			ft_putstr_fd("-2147483648", 1);
		if (n < 0)
		{
			write(fd, "-", 1);
			n = - n;
		}
		if (n >= 10)
			ft_putnbr_fd(n / 10 , fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

int	main(void)
{
	ft_putnbr_fd(123124245, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
