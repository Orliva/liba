#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*tmp;

	tmp = lst;
	if (tmp)
	{
		new_lst = f(tmp);
		new_lst->next = ft_lstmap(tmp->next, f);
		return (new_lst);
	}
	return (NULL);
}
