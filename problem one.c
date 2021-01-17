#include <stdio.h>

int searchElement(int arr[], int arr_size, int target){
	/* Your code goes here*/
	int t=-1;

	for (int i =0 ;i<arr_size;i++)
    {
        if (arr[i]==target)
        {
            return i;
            break;
        }
    }

	if (t==-1)
        return t;
}

void searchElement_test(void)
{
	int A[] = { 2, 1, 3, 5, 4, 7, 6, 8, 9 };
	int target = 5;

	/*Calculate the size of the array*/
	int n = sizeof(A)/sizeof(A[0]);
	int index = searchElement(A, n, target);

	if (index != -1)
		printf("Element %d found at index %d", target, index);
	else
		printf("Element not found in the array");

}

int main()
{
    searchElement_test();
    return 0;

}

