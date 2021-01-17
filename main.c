#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int signal[100];
    float sigmod[100];
    char x,i,z=0;
    int pwr,sign ;
    float mag;
    /*
    signal  signal array
    sigmod  signal after noise array and after 0.5 check too
    x   number of elements
    i   for counting
    z   check tool
    */

    //get number of elements
    printf("enter number pf elements in = ");
    scanf("%d",&x);

    //check that x is greater than 0 and under max number of elements of the array
    if ((x>0)&&(x<=100))
    {
        for (i=0;i<x;i++)
        {
            printf("enter element number %d in 0 or 1 =",i+1);
            scanf("%d",&signal[i]);
            if ((signal[i]!=0)&&(signal[i]!=1))
            {
                z++;
                if (z == 1)
                {
                    i--;
                    printf("input error enter it again last chance in 0 or 1 ");
                }
                else
                {
                    break;
                }

            }
            else
            {
                z=0;
            }

        }
        //check that array is completed right
        if (z!=2)
        {



            //noise code
            for (int i=0; i < x; i++)
            {
                    pwr = rand() % 2;
                    sign = pow((-1), pwr);
                    mag = rand() / (1.0 * RAND_MAX);
                    sigmod[i] = sign * mag;
                    //sigmod[i]= pow()
                    sigmod[i] = signal[i]+ sigmod[i];
            }

            printf("\nsignal array = ");
            for (i=0;i<x;i++)
            {
                printf(" %d ",signal[i]);
            }

            printf("\n\nnoise array = ");
            for (i=0;i<x;i++)
            {
                printf(" %.2f ",(sigmod[i]-signal[i]));
            }

            printf("\n\nsignal with noise array = ");
            for (i=0;i<x;i++)
            {
                printf(" %.2f ",sigmod[i]);
            }



            //check 0.5 code and check number of error elements
            for (i=0;i<x;i++)
            {
                //turn array after noise into 1 and 0 only
                if (sigmod[i]>=0.5)
                {
                    sigmod[i]=1;
                }
                else
                {
                    sigmod[i]=0;
                }
                // count unsimilar elements
                if (sigmod[i]!=signal[i])
                {
                    z++;
                }
            }

            printf("\n\nfinal signal array = ");
            for (i=0;i<x;i++)
            {
                printf(" %d ",sigmod[i]);
            }
            //print final BER value
            printf("\n\nthe number of error BER = %d/%d = %.2f",z,x,((float)z/(float)x));




        }
        else
        {
            printf("\n\narray is not completed");
        }

    }
    //if x out of range
    else if (x<=0)
    {
        printf("\nnumber of elements must be greater than 0");
    }
    else
    {
        printf("\nthe number of elements is out of the range");
    }


    return 0;

}
