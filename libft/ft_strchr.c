#include <stdio.h>

char    *ft_strrchr(const char *str, int c)
{
    int    i;

    i = 0;
    last_i])
    {
        if (str[i] == c)
            last_pos = i;
        i++;
    }
    if (i == 0)
        return (NULL);
    if (i == '\0')
        return ((char*)str + i);
    return ((char*)str + last_pos);
}