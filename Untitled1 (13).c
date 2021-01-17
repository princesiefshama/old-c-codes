#include <stdio.h>

main()
{
    unsigned int x = 1234 , a , b , c ;
    a = x /100;
    b = ( x - (a*100))*100;
    c = a + b;
    printf("%d   %d   %d   %d",x,a,b,c);
}

