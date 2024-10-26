#ifndef LIBFT.H
# define LIBFT.H

# include <stdio.h>
# include <unistd.h>
# include <string.h>

void    bzero(void *b, size_t len);
int ft_isalnum(int i);
void *ft_memchr(const void *s, int c, size_t n);
int ft_strlen(char *str);
char *ft_strnstr(const char *s1, const char *s2, size_t n);

#endif