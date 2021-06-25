#include <stdio.h>
#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main()
{
	int largest, second_largest;

	int a[16] = {1,2,13,4,5,6,7,81,9,12,13,14,15,16,17,8};
	find_two_largest(a, N, &largest, &second_largest);
	printf("The largest value is %d and the second largest value is %d\n",largest,second_largest );

	return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	*largest = a[0];
	*second_largest = a[0];

	for (int i = 1; i < n; i++)
	{
		if (*largest<a[i])
			*largest = a[i];
	}

	for(int s = 0; s < n; s++)
	{
		if(a[s]>*second_largest && a[s] <*largest){
			*second_largest = a[s];
		}
	}

}