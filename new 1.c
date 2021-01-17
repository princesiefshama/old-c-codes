#include "new 1.h"

int sum (int *x, int *y)
{
  int z = *x + *y;
  return z;
}

int mul (int *x, int *y)
{
  int z = *x * *y;
  return z;
}

int sub (int *x, int *y)
{
  int z = *x - *y;
  return z;
}

int div (int *x, int *y)
{
  if (y == 0)
  {
    printf("ERROR divsion by zero.");
  }
  else 
  {
    int z = *x / *y;
    return z;
  }
  
}