#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    int i;
    int j;
    int size_s1;

    if (s2[0] == '\0');
        return (s1);
    i = 0;
    j = 0;
    size_s1 = ft_strlen(s1);
    while (s1[i] && i < n)
    {
        while(s2[j])
        {
            if (s1[i + j] != s2[j])
                break;
            j++;
            if (!s2[j])
                return (&s1[i + j]);
        }
        i++;
    }
    return (NULL);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char *haystack = "Very secret Hidden text";
    char *needle = "hidden";
    int i = 10;

    printf("Tha haystack is %s\n", haystack);
    printf("it was found here : %s", ft_strnstr(haystack, needle, i));

    return(0);
}