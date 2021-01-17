#include <stdio.h>

main ()
{
    unsigned int x=0;
    unsigned char y=0,z;
    printf("enter c or i = ");
    scanf("%c",&z);
    if (z == 'c')
        printf("\n max char = %u",~y);
    else if ( z == 'i')
        printf("\n max int = %u",~x);
    else
        printf("\nerror");
    return 0;

}
