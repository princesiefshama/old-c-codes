#include <stdio.h>

void add (int x,int y)
{
    printf("x+y=%d",x+y);
}
void sub (int x,int y)
{
    printf("x+y=%d",x-y);
}
void mul (int x,int y)
{
    printf("x+y=%d",x*y);
}
void div (int x,int y)
{
    printf("x+y=%d",x/y);
}
int main ()
{
    int x,y,z;
    void (*func[4])(int,int) = {add , sub , mul ,div};
    printf("enter two numbers= ");
    scanf("%d %d",&x,&y);
    printf("number of operation= ");
    scanf("%d",&z);
    (*func[z])(x,y);


    return 0 ;
}


