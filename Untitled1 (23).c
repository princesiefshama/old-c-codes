#include <stdio.h>

int main ()
{
    int x[4],i=0,y[4];
    for (i = 0; i<4;i++)
    {
        scanf("%d",&x[i]);
    }
    for (i = 3 ; i>=0;i--)
    {
        y[i]=x[3-i];
    }
    for (i = 0; i<4;i++)
    {
        printf("\n%d %d",x[i],y[i]);
    }
}
