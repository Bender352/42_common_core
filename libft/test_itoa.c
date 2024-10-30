#include "libft.h"

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