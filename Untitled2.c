#include <stdio.h>


int main ()
{

    int f;
    void*d;
    d = &f;
    printf("enter two digits  =");
    scanf("%d",&f);
    printf("%u  \n%u",*((unsigned char*)d),*(1+(unsigned char*)d));
    printf("\nsmall endianty ");
    return 0;
}

