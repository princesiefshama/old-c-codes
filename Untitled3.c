#include <stdio.h>

int main()
{
    unsigned char a;
    int i, coun1=0, count0=0;
    printf("enter number =");
    scanf("%d",&a);
    for (i=1 ; i<9;i++)
    {
        if (a & 1)
        {
            coun1 = coun1 + 1;

        }
        else
        {
            count0= count0 + 1;

        }

        a = a >>i;

    }

    printf("no of 0 =%d   no of 1=%d",count0,coun1);


    return 0;
}
