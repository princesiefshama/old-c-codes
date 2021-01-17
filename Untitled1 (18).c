#include<stdio.h>

char sum (char x, char y)
{
    char z;
    int d;
    z = x+y;
    d = (int)x+(int)y;
    if (z == d)
        return ( x+y );
    else
        return 0;
}

int main ()
{
    char x,y,l;
    scanf("%d %d",&x,&y);
    l= sum (x,y);
    printf("%d",l);
    return 0;
}
