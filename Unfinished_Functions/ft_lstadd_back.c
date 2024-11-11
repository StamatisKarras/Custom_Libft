#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;
	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
				temp = ft_lstlast(*lst);
				temp->next = new;
		}
	}
}

/*int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*d;
	t_list	*temp;

	a = ft_lstnew("Hello");
	b = ft_lstnew("Hi");
	c = ft_lstnew("Goodbye");
	d = ft_lstnew("Die");

	a->next = b;
	b->next = c;
	ft_lstadd_back(&a, d);
	temp = a;
	while (temp->next)
	{
		printf("%s\n", (char *) temp->content);
		temp = temp->next;
	}
	printf("%s\n", (char *) temp->content);
}*/
