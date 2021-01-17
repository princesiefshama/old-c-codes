#include <stdio.h>

int sort(int arr[], int arr_size )
{
    int i , l,j;
    for (i = 0;i<arr_size;i++)
    {
        if (arr[i+1]<arr[i])
            {
                l=i+1;
                break;
            }
    }
    for (i =0;i <l;i++)
    {
        for (j=0;j<(arr_size-i);j++)
        {
            if (arr[j]>arr[j+1])
            {
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
            }
        }
    }



    return l;
}
int circularArraySearch(int arr[], int arr_size, int element_to_be_found)
{
	/* Your code goes here */
	int n = sort(arr, arr_size);
	int start=0;
	int last = arr_size-1;
	int m,k =-1;
	while (start<=last)
    {
        m=(start+last)/2;
        if (arr[m]==element_to_be_found)
        {
            k = m;
            break;
        }
        else if (arr[m]<element_to_be_found)
        {
            start = m+1;
        }
        else
        {
            last = m-1;
        }
    }
    if (k==-1)
    {
        return k;
    }
    else if (k<arr_size-n)
    {
        return k+n;
    }
    else
    {
        return k-(arr_size-n);
    }

}

/* circularArraySearch_test */
void circularArraySearch_test(void)
{
	int A[] = {9, 10, 2, 5, 6, 8};
	int target = 8;
	int n = sizeof(A)/sizeof(A[0]);
	int index = circularArraySearch(A, n, target);
	if(index != -1){
		printf("Element found at index %d", index);
	}
	else{
		printf("Element not found in the array");
	}

}

int main()
{
    circularArraySearch_test();
    return 0;
}
