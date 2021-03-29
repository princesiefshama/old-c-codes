#include <stdio.h>

int main()
{
    int a,b,c,d,e,i,j,k;
    int x[10][10],y[10][10],z[10][10];
    printf("enter demintion for first matric axb=\n");
    scanf("%d %d",&a,&b);
    printf("enter demintion for second matric cxd=\n");
    scanf("%d %d",&c,&d);

    if ((a>0)&&(b>0)&&(c>0)&&(d>0))
    {
        for (i =0;i<a;i++)
        {
            for (j=0;j<b;j++)
            {
                printf("enter element in first matric %d%d=",i,j);
                scanf("%d",&x[i][j]);
            }
        }
        for (i =0;i<c;i++)
        {
            for (j=0;j<d;j++)
            {
                printf("enter element in second matric %d%d=",i,j);
                scanf("%d",&y[i][j]);
            }
        }
        if (b == c)
        {
            for(i=0;i<a;i++)
            {
                for(j=0;j<d;j++)
                {
                    e =0 ;
                    for(k=0;k<b;k++)
                    {
                        e= e +(x[i][k]*y[k][j]);
                    }
                    z[i][j] = e;
                }

            }
            printf("\n multiplication  matrix result=\n");
            for (int i =0;i<a;i++)
            {
                for (int j=0;j<d;j++)
                {
                    printf("%d  ",z[i][j]);

                }
                printf("\n");
            }



        }
        else
        {
            printf("can't be multiplication");
        }
        for (int i =0;i<a;i++)
            {
                for (int j=0;j<d;j++)
                {
                    k =x[i][j];
                    x[i][j]=x[j][i];
                    x[j][i]=k;

                }
            }
            printf("\nfirst matrix after transpose=\n");

            for (i =0;i<b;i++)
            {
                for (j=0;j<a;j++)
                {
                    printf("%d  ",x[i][j]);

                }
                printf("\n");
            }

    }

    else
    {
        printf("matric dimantions must be greater than 0");
    }



    /* check matric elements
    for (int i =0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            printf("%d  ",x[i][j]);

        }
        printf("\n");
    }
    for (int i =0;i<c;i++)
    {
        for (int j=0;j<d;j++)
        {
            printf("%d  ",y[i][j]);
        }
        printf("\n");
    }
    */




    return 0;
}
