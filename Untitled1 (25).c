#include <stdio.h>

int power (int x,int y)
{
    int l=1;
    if (y==0)
    {

        return 1;
    }
    else
    {
        l= x * power(x,y-1);
    }
    return l;
}
int main ()
{
    int x,y,z;
    scanf("%d %d",&x,&y);
    z=power(x,y);
    printf("%d",z);
    return 0;
}
