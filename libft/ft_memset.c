#include <stdio.h>
void *memset(void *s, int c, size_t len)
{
    size_t  i;
    char    *bloc;

    i = 0;
    bloc = (char *) s;
    while (i < len)
    {
        bloc[i] = (unsigned char) c;
        i++;
    }
    return (s);
}