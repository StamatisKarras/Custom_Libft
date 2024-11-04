#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	if (fd >= 0 && fd <= 2)
	{
		size_t	i;

		i = 0;
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}

/*int	main(void)
{
	ft_putstr_fd("Hello\n", 1);
	return (0);
}*/
