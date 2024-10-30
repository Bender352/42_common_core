#include <stdio.h>

void ft_memcpy(void *dst, const void *src, size_t len)
{
    size_t  i;
    const unsigned char    *buff_src;
    unsigned char    *buff_dst;

    i = 0;
    buff_dst = (unsigned char *)dst;
    buff_src = (const unsigned char *)src;
    while (i < len)
    {
        buff_dst[i] = buff_src[i];
        i++;
    }
}
/*
int	main(void)
{
    char src[] = "Hello World!";
    char dst[13];
    ft_memcpy(dst, src, 10);
    printf("%s\n", dst);
    return (0);
}
*/