#include "libft.h"

char    *convert_to_str(char *buff, size_t nbr, int i, int neg_flag);
int nbr_digits (int nbr);
char    *ft_itoa(int n);
char    *handle_exception(int nbr);

char    *ft_itoa(int n)
{
    size_t i;
    int neg_flag;
    char    *buff;

    neg_flag = 0;
    if (n == 0 || n == INT_MIN || n == INT_MAX)
        return (handle_exception(n));
    i = nbr_digits(n);
    if(n < 0)
    {
        neg_flag = 1;
        n = n * -1;
    }
    buff = (char * )malloc(( i + neg_flag) * sizeof (char));
    if (buff == NULL)
        return (NULL);
    return ((char *)convert_to_str(buff, n, i, neg_flag));
}

char    *handle_exception(int nbr)
{
    char    *buff;
    if ( nbr == 0)
    {
        buff = (char * )malloc(2 * sizeof (char));
        buff = "0";
        return (buff);
    }
    if (nbr == INT_MIN)
    {
        buff = (char * )malloc(12 * sizeof (char));
        buff = "-2147483648";
        return (buff);
    }
    if (nbr == INT_MAX)
    {
        buff = (char * )malloc(11 * sizeof (char));
        buff = "2147483647";
        return (buff);
    }
    return (NULL);
}
char    *convert_to_str(char *buff, size_t nbr, int i, int neg_flag)
{
    buff[i + neg_flag] = '\0';
    while (i > 0)
    {
        buff[i + neg_flag - 2] = (nbr % 10) + '0';
        nbr /= 10;
        i--;
    }
    if (neg_flag == 1)
        buff[0] = '-';
    return (buff);
}

int nbr_digits (int nbr)
{
    size_t i;

    i = 1;
    while (nbr)
    {
        nbr /= 10;
        i++;
    }
    return (i);
}
/*
int main(void)
{
    // Test cases
    int test_cases[] = {42, -42, 0, 123456, -123456, INT_MIN, INT_MAX};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);
    
    // Loop through test cases
    for (int i = 0; i < num_cases; i++)
    {
        char *result = ft_itoa(test_cases[i]);
        if (result)
        {
            printf("ft_itoa(%d) = %s\n", test_cases[i], result);
            //free(result); // Free the allocated memory
        }
        else
        {
            printf("Memory allocation failed for %d\n", test_cases[i]);
        }
    }

    return 0;
}
*/