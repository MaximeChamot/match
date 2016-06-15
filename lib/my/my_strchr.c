#include <stdlib.h>
#include "libmy.h"

char		*my_strchr(char *s, int c)
{
  while (s && *s != '\0' && *s != c)
    s++;
  if (s && *s == c)
    return (s);
  return (NULL);
}
