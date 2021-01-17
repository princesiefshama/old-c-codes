#include <stdio.h>

main( )
{
    int x,y;
    printf("enter two number =");
    scanf("%d %d",&x,&y);
    if (x^y)
        printf("\nnot equal");
    else
        printf("\nequal");
    return 0;


}
