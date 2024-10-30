#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char *buff;
    
    buff = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if(buff[i] == (unsigned char)c)
        {
            return (buff + i);
        }
        i++;
    }
    return (NULL);
}
/*
int	main(void)
{
	char   *s = "quick brown fox jumps over the lazy dog";
	int   c = 'f';
	size_t   n = 17;

	printf("ft_memchr: %p\n", ft_memchr(s, c, n));
	printf("memchr: %p\n", memchr(s, c, n));
}
*/