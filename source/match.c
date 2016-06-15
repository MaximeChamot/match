#include <stdio.h>
#include <stdlib.h>
#include "libmy.h"
#include "match.h"

static char	*skip_wildcards(char *s)
{
  while (s && *s != '\0' && *s == '*')
    s++;
  return (s);
}

int		match(char *s1, char *s2)
{
  while (s1 && s2 && *s1 != '\0' && *s2 != '\0')
    {
      if (*s2 == '*')
	{
	  s2 = skip_wildcards(s2);
	  s1 = my_strchr(s1, *s2);
	}
      else
	{
	  if (*s1 == *s2)
	    {
	      s1++;
	      s2++;
	    }
	}
    }
  if (s2 && *s2 == '\0' && *s2 == '*')
    s2 = skip_wildcards(s2);
  if (s1 && s2 && *s1 == '\0' && *s2 == '\0')
    return (1);
  return (0);
}
