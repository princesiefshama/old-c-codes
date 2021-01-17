#include "test.h"

char x, y;
void calc_test (void)
{

        printf("enter the two numbers for check\n");
        scanf("%d %d",&x,&y);
        char z;
        //sum part

        z = sum (&x,&y);

        if (z == x+y)
        {
            if (z == (int)x+(int)y)
            {
                printf("pass\n");
            }
            else
            {
                printf("fall\n");
            }
        }
        else
        {
            printf("fall\n");
        }

        //subtraction part


        z = sub (&x,&y);


        if (z == x-y)
        {
            if (z == (int)x-(int)y)
            {
                printf("pass\n");
            }
            else
            {
                printf("fall\n");
            }
        }
        else
        {
            printf("fall\n");
        }

        //multiplication part


        z = mul ( &x,&y);

        if (z == x*y)
        {
            if (z == (int)x*(int)y)
            {
                printf("pass\n");
            }
            else
            {
                printf("fall\n");
            }
        }
        else
        {
            printf("fall\n");
        }

        // division part


        z = div ( &x,&y);

        if (z == x/y)
        {
            if (z == (int)x/(int)y)
            {
                printf("pass\n");
            }
            else
            {
                printf("fall\n");
            }
        }
        else
        {
            printf("fall\n");
        }



    return 0;

}
