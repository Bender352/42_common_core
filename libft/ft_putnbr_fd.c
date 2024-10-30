#include "libft.h"

void    ft_putnbr_fd(int nbr, int fd)
{
    size_t  i;
    char    *buff;

    i = 0;
    buff = ft_itoa(nbr);
    if (buff == NULL)
        return(NULL);
    while (buff[i])
    {
        write(fd, &buff[i], 1);
        i++;
    }
    free(buff);
}