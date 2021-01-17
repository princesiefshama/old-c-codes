#include "newfunc.h"

char sum (char *x, char *y)
{
  char z = *x + *y;
  return z;
}

char mul (char *x, char *y)
{
  char z = *x * *y;
  return z;
}

char sub (char *x, char *y)
{
  char z = *x - *y;
  return z;
}

char div (char *x, char *y)
{
  if (y == 0)
  {
    printf("ERROR divsion by zero.");
  }
  else
  {
    char z = *x / *y;
    return z;
  }

}
