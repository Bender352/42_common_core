int ft_strlcat(char *dest, const char *src, unsigned int size)
{
    unsigned int    src_len;
    unsigned int    dst_len_append;
    unsigned int    i;

    src_len = (unsigned int) ft_strlen(src);
    dst_len_append = (unsigned int) ft_strlen(dest);
    i = 0;
    while (i < src_len && dst_len_append - 1 + i < size)
    {
        dest[dst_len_append - 1 + i] = src [i];
        i++;
    }
    dest[dst_len_append - 1 + i] = '\0';
    return ((unsigned int)ft_strlen(dest));
}
    int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++,
    }
    return (i);
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