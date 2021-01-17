#include <stdio.h>

main()
{
    int x,y,s;
    char z;
    printf("enter the first number  then arithmatic operation then the second number ");
    scanf("%d %c %d",&x,&z,&y);
    if (z == '+')
    {
        s= x + y;
        printf( "\n%d %c %d = %d",x,z,y,s);

    }
    else if (z == '-')
    {
        s= x - y;
        printf( "\n%d %c %d = %d",x,z,y,s);
    }
    else if (z == '*')
    {
        s= x * y;
        printf( "\n%d %c %d = %d",x,z,y,s);
    }
    else if (z == '/')
    {
        s= x / y;
        printf( "\n%d %c %d = %d",x,z,y,s);
    }
    else
        printf("\nerror");

    return 0 ;
}
