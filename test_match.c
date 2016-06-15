#include <stdio.h>
#include "match.h"

int		main()
{
  char s1[] = "main.c";
  char s2[] = "*.c";

  printf("TEST 1:\n");
  printf("[%s] vs [%s] : [1][%d]\n", s1, s2, match(s1, s2));
  printf("------\n\n");

  char s3[] = "main.ca";
  char s4[] = "*.c";

  printf("TEST 2:\n");
  printf("[%s] vs [%s] : [0][%d]\n", s3, s4, match(s3, s4));
  printf("------\n\n");

  char s5[] = "main.ca";
  char s6[] = "*";

  printf("TEST 3:\n");
  printf("[%s] vs [%s] : [1][%d]\n", s5, s6, match(s5, s6));
  printf("------\n\n");

  char *ptr1 = NULL;
  char *ptr2 = NULL;

  printf("TEST 4:\n");
  printf("[NULL] vs [NULL] : [0][%d]\n", match(ptr1, ptr2));
  printf("------\n\n");

  char s7[] = "main.cai";
  char s8[] = "****************i*****n****.****c******a******";

  printf("TEST 5:\n");
  printf("[%s] vs [%s] : [1][%d]\n", s7, s8, match(s7, s8));
  printf("------\n\n");


  return (0);
}
