#include <stdio.h>

main()
{

    int i,j,k;
    printf("enter the number or rows =");
    scanf("%d",&k );
    for (i=k;i>= 0;i--)
    {
        for (j=(0) ; j<=(2*k) ;j++)
        {

            if ((j> (k- i))&&(j < (k + i)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}


