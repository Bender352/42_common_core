#include "libft.h"

void *ft_calloc(size_t number_of_elements, size_t el_size)
{
    void    *buff;

    if (number_of_elements == 0 || el_size == 0)
        return (NULL);
    buff = malloc(number_of_elements * el_size);
    if (buff == NULL)
        return (NULL);
    ft_bzero(buff, number_of_elements * el_size);
    return (buff);
}