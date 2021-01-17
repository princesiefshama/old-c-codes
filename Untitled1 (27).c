#include <stdio.h>
#include <string.h>


int main()
{
    char x[1000],y[1000];
    char z;
    int i;
    printf("enter word = ");
    gets(x);
    int q = strlen(x);
    for( i= 0;i<1000;i++)
    {
        if (x[i]=='\0')
        {
            y[i]='\0';
            break;
        }
        printf("\n%c\n",x[i]);
        z=x[q-i];
        printf("%c\n",z);
        y[i]=z;
        printf("%c\n",y);
    }

    printf("\n%d\n",i);
    printf("%d\n",q);
    printf("%s\n",x);
    printf("%s",y);
    return 0;

}
