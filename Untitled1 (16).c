#include <stdio.h>

int main()
{
    int x ;
    int i=0 ;
    int j=0;
    printf("enter number of elements of array=");
    scanf("%d",&x);
    int y[x] ;

    for (i =0 ; i<x;i++)
    {
        printf("enter element %d =",(i+1));
        scanf("%d",&y[i]);
    }
    int z;
    printf("enter the sum number =");
    scanf("%d",&z);
    for (i =0 ; i<x;i++)
    {

        for (j =0 ; j<x;j++)
        {
            if ((y[i]+y[j])==z)
            {
                printf("\nresult number= %d + %d =%d",y[i],y[j],z);
            }
        }


    }
    return 0;

}
