#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	if (!(list = (t_list *)malloc((sizeof(t_list)))))
		return (NULL);
	if (!(list->content = (void *)malloc((sizeof(unsigned char) * (content_size)))))
		list->content = NULL;
	list->content = ft_memcpy(list->content, content, content_size);
	if (!list->content)
		list->content_size = 0;
	else
		list->content_size = content_size;
	list->next = NULL;
	return (list);
}
