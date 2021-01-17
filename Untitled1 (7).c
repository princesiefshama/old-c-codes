#include <stdio.h>
#include <stdlib.h>

main ()
{
    printf("enter number please ");
    int x;
    scanf("%d",&x);
    if ( x & 1)
        printf("odd number");
    else
        printf("even number");
    return 0 ;
}
