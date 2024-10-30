#include "libft.h"
int ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t    src_len;
    size_t    dst_len_append;
    size_t    i;

    src_len = (size_t) ft_strlen((char *)src);
    dst_len_append = (size_t) ft_strlen(dest);
    i = 0;
    while (i < src_len && dst_len_append - 1 + i < size)
    {
        dest[dst_len_append - 1 + i] = src [i];
        i++;
    }
    dest[dst_len_append - 1 + i] = '\0';
    return ((size_t)ft_strlen(dest));
}
/*
 Concatenate two strings. Appends src to string dst of size siz (unlike strncat(), siz is the full size of dst, not space left). At most siz-1 characters will be copied. 
 Always NULL terminates (unless siz <= strlen(dst)).

Returns:

    The strlcat() function returns strlen(src) + MIN(siz, strlen(initial dst)). If retval >= siz, truncation occurred. 

Appends src to string dst of size siz (unlike strncat(), siz is the full size of dst, not space left). At most siz-1 characters will be copied.
Always NULL terminates (unless siz <= strlen(dst)).

Returns:

    The strlcat() function returns strlen(src) + MIN(siz, strlen(initial dst)). If retval >= siz, truncation occurred. 
*/