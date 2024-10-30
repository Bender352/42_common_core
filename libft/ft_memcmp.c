#include "libft.h"

int    ft_memcmp(const void *s1, const void *s2, size_t size)
{
  size_t  i;
  unsigned char *buff_s1;
  unsigned char *buff_s2;

  i = 0;
  buff_s1 = (unsigned char *)s1;
  buff_s2 = (unsigned char *)s2;

  while (i < size)
  {
    if(buff_s1[i] != buff_s2[i])
      return (buff_s1 - buff_s2);
    i++;
  }
  return (0);
}
/*
int	main(void)
{
	char	s1[] = "testeteste";
	char	s2[] = "teste12345";
	int	n = 8;

	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, n));
	printf("memcmp: %d\n", memcmp(s1, s2, n));
}*/