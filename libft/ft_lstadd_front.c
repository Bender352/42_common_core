#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new == NULL)
        return (NULL);
    new->next = *lst;
    *lst = new;
}