#include "libft.h"

void ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;
    const unsigned char *buff_src;
    unsigned char   *buff_dst;
    unsigned char   *buff_temp;

    i = 0;
    buff_src = (const unsigned char *) src;
    buff_dst = (unsigned char *) dst;
    buff_temp = (unsigned char *) malloc(sizeof(char) * (len + 1));
    while (i < len)
    {
        buff_temp[i] = buff_src[i];
        i++;
    }
    i = 0;
    while (i < len)
    {
        buff_dst[i] = buff_temp[i];
        i++;
    }
    free(buff_temp);
}