#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (tmp->next == NULL)
			break ;
		tmp = tmp->next;
	}
	return (tmp);
}

/*int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*d;
	char 	*content;

	a = ft_lstnew("Hello");
	b = ft_lstnew("Not hello");
	c = ft_lstnew("Goodbye");
	a->next = b;
	b->next = c;
	d = ft_lstlast(a);
	content = (char *) d->content;
	printf("%s\n", content);
	return (0);
}*/
