#include "libft.h"

char *ft_strdup(const char *s)
{
    char *buff;
    size_t  size_s;
    size_t  i;

    size_s = 0;
    while (s[size_s])
        size_s++;
    buff = malloc(size_s * (sizeof(char)) + 1);
    if (buff == NULL)
        return (NULL);
    i = 0;
    while (i <= size_s)
    {
        buff[i] = s[i];
        i++;
    }
    return (buff);    
}