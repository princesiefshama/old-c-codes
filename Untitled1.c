#include <stdio.h>

main()
{

    int i, j,x;
    scanf("%d",&j);

    for (i = 0; i < (sizeof j) ; i++ )
    {
        x = j/(10**i);
        if (i == 0)
            printf("first number = %d",x);
        if (i == ((sizeof j)-1))
            printf("last number = %d",x);
    }
    return 0 ;

}
