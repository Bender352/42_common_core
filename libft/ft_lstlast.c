#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    if(!lst)
        return (NULL);
    while (lst)
        lst = lst->next;
    return (lst);
}