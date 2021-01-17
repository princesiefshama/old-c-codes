#include <stdio.h>

int main()
{
    int x[100];
    int y,a;
    printf("enter number of elements =");
    scanf("%d",&y);
    printf("enter elements =\n");
    for (int i = 0 ; i < y ; i++)
    {
        scanf("%d",&x[i]);
    }
    for (int i = 0 ; i < y ; i++)
    {
        a = x[i];
        while (a)
        {
            if (a % 2 == 1)
            {
                x[i] = 1;
                a = 0;
            }
            if ((a/2==1)&&(a%2==0))
            {
                x[i] = 0;
                a = 0;
            }
            else
            {
                a = a/2;
            }
        }
        printf("%d\n",x[i]);
    }
    return 0;
}

