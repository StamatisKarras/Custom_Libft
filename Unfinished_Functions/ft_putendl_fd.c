#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (fd >= 0 && fd <= 2)
	{
		i = 0;
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
		write(fd, "\n", 1);
	}
}

/*int	main(void)
{
	ft_putendl_fd("Helloasdasdasd", 1);
	return (0);
}*/
