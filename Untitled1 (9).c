#include <stdio.h>

main ()
{
    int x,y,z,i,k;
    int v = 1,sum = 0,num = 0;
    printf("enter number =");
    scanf("%d",&x);
    y = x;
    z = x;
    while (y)
    {
        num = num +1;
        y = y / 10 ;

    }
    while (z)
    {
        k = z%10;
        switch (num)
        {
            case 1:
                v = k;
                break;
            case 2:
                v = k * k;
                break;
            case 3:
                v = k * k * k;
                break;
            case 4:
                v = k * k *k *k;
                break;
            case 5:
                v = k * k *k *k *k;
                break;


        }

        sum = sum + v;
        z=z/10;

    }
    if (sum == x)
    {
        printf("%d is armstrong number",x);

    }
    else
    {
        printf("%d is not armstrong number",x);

    }

    return 0;
}

