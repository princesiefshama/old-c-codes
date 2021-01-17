#include <stdio.h>

int main ()
{
    int x[20],y,a;
    printf("enter number of elements=");
    scanf("%d",&y);
    if (y <= 20)
    {
        for (int i=0 ; i < y;i++)
        {
            printf("enter element %d =",(i+1));
            scanf("%d",&x[i]);
        }
        char z;
        for (;;)
        {
            printf("\nenter i for inserting \nd for removing \nb for not being asked again \n=");
            scanf("%c",&z);
            switch (z)
            {
                case 'i':
                {
                    printf("\nenter the number of element=");
                    scanf("%d",&a);
                    if (a > y)
                    {
                        printf("\nbigger than array numbers");
                        break;

                    }
                    else
                    {
                        printf("\nenter the new value =");
                        scanf("%d",&x[a-1]);
                        break;
                    }

                }
                case 'd':
                {
                    printf("\nenter the number of element=");
                    scanf("%d",&a);
                    if (a > y)
                    {
                        printf("\nbigger than array numbers");
                        break;
                    }
                    else
                    {
                        for ( int i = ( a-1 ); i < y ;i++)
                            {
                                x[i] = x[i+1] ;
                            }
                        y = y - 1;
                        break;
                    }

                }
                case 'b':
                    break;

                default:
                {
                    printf("\nerror \nenter again\n");
                }



            }
            if ( z == 'b')
            {
                break;

            }
        }

    }
    else
    {
        printf("enter number from 0 to 20");
    }
    for (int i=0 ; i < y;i++)
        {
            printf("\nenter element %d = %d",(i+1),x[i]);

        }

     return 0 ;


}
