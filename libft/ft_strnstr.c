#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    unsigned int i;
    unsigned int j;
    
    if (s2[0] == '\0')
        return ((char *)s1);
    i = 0;
    j = 0;
    while (s1[i] && i < n)
    {
        while(s2[j])
        {
            if (s1[i + j] != s2[j])
                break;
            j++;
            if (!s2[j])
                return ((char *)&s1[i]);
        }
        i++;
    }
    return (NULL);
}
/*
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char *haystack = "V hidden text";
    char *needle = "hidden";
    int i = 10;

    printf("The haystack is %s\n", haystack);
    printf("it was found here : %s", ft_strnstr(haystack, needle, i));

    return(0);
}
*/