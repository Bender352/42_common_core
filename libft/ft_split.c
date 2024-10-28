#include "libft.h"

char   **add_to_array(char **array, char *append);

char **ft_split(char const *s, char c)
{
    int current_pos;
    int old_pos;
    char    **array;

    current_pos = 0;
    old_pos = 0;
    while (s[current_pos])
    {
        if(s[current_pos] == c)
        {
            array = add_to_array(array, ft_substr(s, current_pos, current_pos - old_pos));
        }
        current_pos++;
    }
    return (array);
}

char   **add_to_array(char **array, char *append)
{
    int len;
    char    **new_array;
    int i;

    len = 0;
    while (array[len])
        len++;
    if (len == 0)
    {
        new_array = (char**)malloc(sizeof(char**) * 1);
        len++;
    }
    else
        new_array = (char**)malloc(sizeof(char**) * len + 2);
    i = 0;
    while (i < len)
    {
        new_array[i] = array[1];
        i++;
    }
    new_array[i ] = append;
    new_array[i + 1] = NULL;
    free(array);
    return (new_array);
}


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
