#include <stdio.h>

int main()
{
    int x , y, z[10000];
    int i = 0;
    printf("lower value =");
    scanf("%d",&x);
    printf("upper value =");
    scanf("%d",&y);
    if (x < y)
    {
        for ( i = 0;i < y ;i++)
        {
            z[i]= y - i;
            printf("%d\n",z[i]);
            if (z[i] == x)
            {
                break;
            }
        }
    }
    else
    {
        for( i = 0 ;i<2;i++)
        {
            z[i]= 0xFF;
            printf("%d\n",z[i]);
        }
    }
}
