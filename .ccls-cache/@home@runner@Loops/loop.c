#include <stdio.h>

int time_table(int n)
{
  
int mul;

  for (int i = 1; i <= 12; i++)
    printf("%d * %d = %d\n", n, i, (n*i));
  
return 0;
}