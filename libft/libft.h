#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>

int ft_atoi(const char *str);
void    ft_bzero(void *b, size_t len);
void    *ft_calloc(size_t number_of_elements, size_t el_size);
int ft_isalnum(int i);
int ft_isalpha(int i);
int ft_isascii(int i);
int ft_isdigit(int i);
int ft_isprint(int i);
char    *ft_itoa(int n);
t_list  *ft_lstnew(void *content);
void    *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t size);
void    ft_memcpy(void *dst, const void *src, size_t len);
void    ft_memmove(void *dst, const	void *src, size_t len);
void    ft_putchar_fd(char c, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int nbr, int fd);
void    ft_putstr_fd(char *s, int fd);
void    *ft_memset(void *s, int c, size_t len);
char    **ft_split(char const *s, char c);
char    *ft_strchr(const char *str, int c);
char    *ft_strdup(const char *s);
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
int ft_strlcat(char *dest, const char *src, size_t size);
unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size);
int ft_strlen(char *str);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *s1, const char *s2, size_t n);
char    *ft_strrchr(const char *str, int c);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);

typedef struct s_list
{
    void    *content;
    struct s_list   *next;
}   t_list;

#endif