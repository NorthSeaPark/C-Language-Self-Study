#include <stdio.h>
#define N 6

int *find_middle(int a[], int n);

int main()
{
	int *p;
	int a[N] = {1,2,3,4,5,6};
	p = find_middle(a,N);

	printf("The Pointer is %d\n", p);
	return 0;
}

int *find_middle(int a[], int n)
{
	return &a[n/2];
}