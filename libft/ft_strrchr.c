#include <stdio.h>

char    *ft_strrchr(const char *str, int c)
{
    int    i;
    int    last_pos;


    i = 0;
    last_pos = 0;
    while (str[i])
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