#include <stdio.h>

char    *ft_strrchr(const char *str, int c)
{
    int    i;
    int    last_pos;
    int    flag;

    i = 0;
    last_pos = 0;
    flag = 0;
    if (!str)
        return (NULL);
    while (str[i])
    {
        if (str[i] == c)
        {
            last_pos = i;
            flag = 1;
        }
        i++;
    }
    if (flag == 0)
        return (NULL);
    if (c == '\0')
        return ((char *)str + i);
    return ((char*)str + last_pos);
}