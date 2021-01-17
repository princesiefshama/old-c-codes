#include<stdio.h>
#define clear(l,n) l=l&((0xFF<<(n+1))|(0xFF>>(9-n)))
#define read(x,y) x=x&(1<<y)
#define toggle(a,b) a=a^(1<<b)

int main ()
{
    int l,n,x,y,a,b;
    scanf("%d %d %d %d %d %d",&l,&n,&x,&y,&a,&b);
    clear(l,n);
    read(x,y);
    toggle(a,b);
    printf("%d \n %d \n %d",l,x,a);

    return 0;
}
