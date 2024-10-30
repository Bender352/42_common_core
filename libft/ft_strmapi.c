#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    char    *buff;

    i = 0;
    if (s == NULL || f == NULL)
        return (NULL);
    buff = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
    if (buff == NULL)
        return (NULL);
    while (s[i])
    {
        buff[i] = f(i, s[i]);
        i++;
    }
    buff[i] = '\0';
    return (buff);
}