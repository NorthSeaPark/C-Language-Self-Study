#include <stdio.h>

void swap(int *p, int *q);

int main()
{
		
	int p, q;

	p = 19;
	q = 20;
	
	swap(&p, &q);

	printf("p is %d\n", p);
	printf("q is %d\n", q);
}

void swap(int *p, int *q){
	int cool = *p;
	*p = *q;
	*q = cool;
}