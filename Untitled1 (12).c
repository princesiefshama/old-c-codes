#include <stdio.h>

main()
{

    int i,j,k;
    printf("enter the number or rows =");
    scanf("%d",&k );
    for (i=0;i<= k;i++)
    {
        for (j=(2*k) ; j>=0 ;j--)
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





