#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *) malloc((sizeof(t_list)));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return(list);
}

/*int	main(void)
{
	t_list	*list;

	list =  ft_lstnew("HELlo");
	printf("%s\n", (char *) list->content);
	return (0);
}*/
