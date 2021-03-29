#include <stdio.h>

main()
{

    int x,y ,z,k,o,j;
    int num=0;
    int sum = 0;
    printf("enter the number =");
    scanf("%d",&z);
    k = z;
    x = z;
    while (k)
    {
        k = k/10;
        num=num+1;
    }
    while (x)
    {
        o = k%10;
        for (j=0;j<=num;j++)
        {
            y = y*o;
        }
        sum= y +sum;
        k=k/10;
    }

    if (sum == z)
    {
        printf("%d is armstrong number ",z);

    }
    else
    {
        printf("%d is not armstrong number",z);

    }



    return 0;
}
