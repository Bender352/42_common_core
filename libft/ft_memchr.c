#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if((const char *)s[i] == (unsigned char)c)
        {
            return (s + i);
        }
        i++;
    }
    return (NULL);
}

int	main(void)
{
	char   *s = "quick brown fox jumps over the lazy dog";
	int   c = 'f';
	size_t   n = 17;

	printf("ft_memchr: %p\n", ft_memchr(s, c, n));
	printf("memchr: %p\n", memchr(s, c, n));
}