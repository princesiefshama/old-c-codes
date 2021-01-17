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
    for( i= 1;i<1000;i++)
    {
        if (x[i-1]=='\0')
        {
            y[i-1]='\0';
            break;
        }
        //printf("\n%c\n",x[q-i]);
        //z=x[q-i];
        //printf("%c\n",z);
        //y[i-1]=z;
        //printf("%c\n",y);
        y[i-1]=x[q-i];
        printf("%c",y[i-1]);
    }

    printf("\n%d\n",i);
    printf("%d\n",q);
    printf("%s\n",x);
    printf("%s",y);
    return 0;

}

