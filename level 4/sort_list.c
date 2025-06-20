#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*head = lst;
	void	*tmp;

	while (lst && lst->next)
	{
		if (!cmp((int)(long)lst->data, (int)(long)lst->next->data))
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = head;
		}
		else
			lst = lst->next;
	}
	return (head);
}
