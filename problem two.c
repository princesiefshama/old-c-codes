#include <stdio.h>

int smallestMissing(int arr[], int low, int high)
{
	/* Your code goes here */
	for (int i = 0;i<=high;i++)
        if (arr[i]!=i)
        {
            return i;
            break;
        }
}

/* smallestMissing_test function */
void smallestMissing_test(void)
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int low = 0, high = n - 1;

	printf("The smallest missing element is %d",
			smallestMissing(arr, low, high));

}

int main ()
{
    smallestMissing_test();
    return 0;
}
