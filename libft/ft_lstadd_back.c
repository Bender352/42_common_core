#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    int i;

    if(!new)
        return (NULL);
    lst = ft_lstlast(lst);
    new->next = NULL;
    *lst->next = new;

}