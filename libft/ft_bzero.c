#include <stdio.h>
void ft_bzero(void *b, size_t len)
{
    char    *block;
    size_t i;

    i = 0;
    block = (char *) b;
    while (i < len)
    {
        block[i] = '\0';
        i++;
    }
}