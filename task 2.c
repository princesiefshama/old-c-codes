#include <stdio.h>
#include <stdlib.h>

main ()
{

    //question 1

    printf("enter number please ");
    int x1;
    scanf("%d",&x1);
    if ( x1 & 1)
        printf("\nodd number");
    else
        printf("\neven number");



    //question 2
    int x2,y2,s2;
    char z2;
    printf("\n\nenter the first number  then arithmatic operation then the second number ");
    scanf("%d %c %d",&x2,&z2,&y2);
    if (z2 == '+')
    {
        s2= x2 + y2;
        printf( "\n%d %c %d = %d",x2,z2,y2,s2);

    }
    else if (z2 == '-')
    {
        s2= x2 - y2;
        printf( "\n%d %c %d = %d",x2,z2,y2,s2);
    }
    else if (z2 == '*')
    {
        s2= x2 * y2;
        printf( "\n%d %c %d = %d",x2,z2,y2,s2);
    }
    else if (z2 == '/')
    {
        s2= x2 / y2;
        printf( "\n%d %c %d = %d",x2,z2,y2,s2);
    }
    else
        printf("\nerror");


    //question 3
    unsigned int x3=0;
    unsigned char y3=0,z3;
    printf("\n\nenter c or i = ");
    scanf("%c",&z3);
    if (z3 == 'c')
        printf("\n max char = %u",~y3);
    else if ( z3 == 'i')
        printf("\n max int = %u",~x3);
    else
        printf("\nerror");


    //question 4
    int x4,y4;
    printf("\\nenter two number =");
    scanf("%d %d",&x4,&y4);
    if (x4^y4)
        printf("\nnot equal");
    else
        printf("\nequal");

    return 0 ;
}

