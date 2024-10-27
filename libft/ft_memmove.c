#include <stdio.h>

void ft_memmove(void *dst, const	void *src, size_t len)
{
    size_t  i;
    const unsigned char *buff_src;
    unsigned char   *buff_dst;
    unsigned char   *buff_temp;

    i = 0;
    buff_src = (unsigned char *) src;
    buff_dst = (unsigned char *) dst;
    while (i < len)
    {
        if(buff_src[i + 1] != '\0')
        {
            buff_temp = buff_src[i + 1];
        }
        
        i++;
    }

}