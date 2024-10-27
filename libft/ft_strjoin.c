#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *new_str;
    size_t  len_s1;
    size_t  len_s2;

    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    new_str = ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
    ft_strlcat(new_str, s1, len_s1 + len_s2);
    ft_strlcat(new_str, s2, len_s1 + len_s2);
    return (new_str);
}