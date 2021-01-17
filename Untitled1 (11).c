#include <stdio.h>

main ()
{
    int x,y,z,i,k,v = 1,sum = 0,num = 0;
    printf("enter number =");
    scanf("%d",&x);
    y = x;
    z = x;
    while (y)
    {
        num = num ++;
        y = y/10;

    }
    while (z)
    {
        k = z%10;
        for (i =0 ; i<num;i++)
        {
            v = k * v;
        }
        sum = sum + v;
        z=z/10;

    }
    if (sum == x)
        printf("%d is armstrong number",x);
    else
        printf("%d is not armstrong number",x);

    return 0;
}
