#include <stdio.h>
#include <stdlib.h>

int findKLargest(int A[], int size, int k);

int main()
{
	int A[1000], i, k, size, res;

	printf("Unsorted Array: \n");
	for (i = 0; i < 1000; i ++)
	{
		A[i] = rand()%100 - 50; //generate integers between -50 and 100
		// A[i] = rand()%100 + (- 100); only prints negative numbers 
    printf("%d\n",A[i]);
	}

	printf("Please enter kth largest number you want to search for: ");
	scanf("%d", &k);
	
	res= findKLargest(A, 1000, k);
	printf("The kth largest number in array is %d\n: ", res);
}
int findKLargest(int A[], int size, int k)
{
	int i, m, res, large;
	for (i = 0; i < size - 1; i++)
	{
		for (m = 0; m < size - i - 1; m++)
		{
			if(A[m] > A[m + 1])
			{
				int sort = A[m];
				A[m] = A[m + 1];
				A[m + 1] = sort;
				m=-1;
			}
		}
	}
  printf("Sorted Array: \n");
  for (i = 0; i < size ; i++)
	{
    printf("%d\n",A[i]);
	}

  large = A[size - k];
  return large; 
}