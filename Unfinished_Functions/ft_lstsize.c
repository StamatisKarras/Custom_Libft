#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*tmp;

	count = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}

/*int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = ft_lstnew("Hello");
	b = ft_lstnew("Hello");
	c = ft_lstnew("Hello");
	a->next = b;
	b->next = c;
	printf("%d\n", ft_lstsize(a));
	return (0);
}*/
