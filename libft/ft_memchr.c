#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
   const char *str;
   size_t i;

   str = s;
   i = 0;

   while (i < n)
   {
      if(*str == c)
      {
	 return ((unsigned char *) str);
      }
      str++;
      i++;
   }
   return (NULL);
}

