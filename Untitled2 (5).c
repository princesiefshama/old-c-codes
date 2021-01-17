#include <stdio.h>

int main()
{
    int x , a ;
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

    for (i =0 ; i<x;i++)
    {

        for (j =0 ; j<x;j++)
        {
            if (y[i] > y[j])
            {
                a = y[i];
                y[i] = y[j];
                y [j] = a;
            }
        }
    }
    for (i =0 ; i<x;i++)
    {
        printf("\nenter element %d = %d",(i+1),y[i]);

    }
    return 0;

}

