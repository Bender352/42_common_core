#include "libft.h"

char **ft_split(char const *s, char c);
char **add_to_array(char **array, char *append);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_strlen(char *str);

char **ft_split(char const *s, char c)
{
    unsigned int current_pos = 0;
    unsigned int old_pos = 0;
    char **array = NULL;

    while (s[current_pos])
    {
        if (s[current_pos] == c)
        {
            array = add_to_array(array, ft_substr(s, old_pos, (current_pos - old_pos)));
            old_pos = current_pos + 1;
        }
        current_pos++;
    }
    if (old_pos < current_pos)
        array = add_to_array(array, ft_substr(s, old_pos, current_pos - old_pos));
    return array;
}

char **add_to_array(char **array, char *append)
{
    unsigned int len;
    unsigned int i;    
    
    len = 0;
    i = 0;
    while (array && array[len])
        len++;
    char **new_array = (char **)malloc(sizeof(char *) * (len + 2));
    if (!new_array)
        return NULL;
    while (i < len)
    {
        new_array[i] = array[i];
        i++;
    }
    new_array[len] = append;
    new_array[len + 1] = NULL;
    free(array);
    return new_array;
}
/*
int main(void)
{
    char **result;
    char *str = "Hello,world,this,is,42";
    char delimiter = ',';

    // Call ft_split with the string and delimiter
    result = ft_split(str, delimiter);

    // Print each element of the result array
    if (result)
    {
        int i = 0;
        while (result[i])
        {
            printf("result[%d]: %s\n", i, result[i]);
            i++;
        }
    }

    // Free each string in the result array and the array itself
    int i = 0;
    while (result && result[i])
    {
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    char    *buff_sub;
    size_t  s_len;

    i = 0;
    s_len = ft_strlen((char *)s);
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

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}
*/