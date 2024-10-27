#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    int a;

    i = 0;
    a = 0;
    while(s1[i] || s2[i] && i < n)
    {
        if(s1[i] != s2[i])
        {
            a = s1[i] - s2[i];
            return (a);
        }
        i++;
    }
    return (0);
}