#include <stdio.h>

int search (int* arr,int size,int req)
{
    int s =0;
    int l = size-1;
    int m=0;
    while (s<=l)
    {
        m = (l+s)/2;
        if (arr[m] == req)
        {
            return m;
        }
        else if (arr[m] < req)
        {
            s=m+1;
        }
        else
        {
            l=m-1;
        }
    }
    printf("hi");
    return -1;
}

int main ()
{
    int arr[]={1,1,2,2,2,4,6};
    int t = sizeof(arr)/sizeof(arr[0]);
    int req =1;
    int l = (arr,t,req);
    int i =0;
    if (l == -1)
    {
        printf("%d is not in array",req);

    }
    else
    {
        for (i = l;i<t;i++)
            if (arr[i]!=req)
        {
            break;
        }
        printf("%d",i-1);
    }
    return 0;

}
