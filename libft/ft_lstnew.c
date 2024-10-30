#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *buff;

    buff = malloc(sizeof(t_list));
    if (buff == NULL)
        return (NULL);
    buff->content = content;
    buff->next = NULL;
    return (buff);
}