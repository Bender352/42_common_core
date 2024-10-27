#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    char    *buff_sub;
    size_t  s_len;

    i = 0;
    s_len = ft_strlen(s);
    if (start > s_len)
        return (NULL);
    if (len > s_len - start)
        len = s_len - start;
    buff_sub = (char *)malloc(sizeof(char) * (len + 1));
    if (buff_sub == NULL)
        return (NULL);
    while (i + start < start + len)
    {
        if (s[start + i] == '\0')
            break;
        buff_sub[i] = s[start + i];
        i++;
    }
    buff_sub[i] = '\0';
    return (buff_sub);
}