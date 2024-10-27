#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int buff;
    int neg;

    i = 0;
    buff = 0;
    neg = 1;
    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '0')
    {
        buff = buff * 10 + str[i] - '0';
        i++;
    }
    return (buff * neg);
}