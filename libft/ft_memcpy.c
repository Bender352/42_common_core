#include <stdio.h>

void ft_memcpy(void *dst, const void *src, size_t len)
{
    size_t  i;
    const unsigned char    *buff_src;
    unsigned char    *buff_dst;

    i = 0;
    buff_dst = (const char *)dst;
    buff_src = (char *)src;
    while (i < len)
    {
        buff_dst[i] = buff_src[i];
        i++;
    }
    return (dst);
}