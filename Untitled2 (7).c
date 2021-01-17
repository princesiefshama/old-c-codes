#include <stdio.h>

int *inv (int* , int);

int main ()
{
    int x=5;
    int a[5] = {1,2,3,4,5};
    int *b;
    b = inv(&a ,x);
    for (int i = 0; i<x ;i++)
    {
        printf("%d  %d\n",a[i],*(b+i));
    }

}

int *inv(int *a,int y)
{
    int b[y];
    for (int i=0;i<y;i++ )
    {
        b[i]=*(a+(y-i));
    }
    return &b;
}


