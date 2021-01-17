#include <stdio.h>
int ccr (int* arr; int c)
{
    int i,z,x,y=0;
    for (;;)
    {
        x=0;
        for (int i =0;i<c;i++)
        {
            if (arr[i]>arr[i+1])
            {
                z = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=z;
                x--;

            }
            x++;
        }
        y++;
        if (x==5)
        {
            break;
        }
    }
    return y;
}

int main ()
{
    int arr[6];
    int l;
    printf("enter 6 elements\n");
    for (int i=0;i<6;i++)
    {
        scanf("%d ",arr[i]);
    }
    l = ccr(arr[],6)
    printf("%d",l);
}
