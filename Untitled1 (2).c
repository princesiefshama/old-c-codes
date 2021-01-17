#include <stdio.h>


int main ()
{

    int f;
    void*d;
    d = &f;
    printf("enter two numbers=");
    scanf("%d",f);
    printf("%u  \n %u",*((unsigned char*)d),*(1+(unsigned char*)d));
    return 0;
}
