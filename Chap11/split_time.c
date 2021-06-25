#include <stdio.h>

void split_time(long int total_sec, int *hr, int *min, int *sec);

int main()
{
	long int total_sec;
	int hr, min, sec;

	total_sec = 3601;

	split_time(total_sec, &hr, &min, &sec);
	printf("We have %d hours, %d minnutes and %d seconds\n", hr, min, sec);

	return 0;
}

void split_time(long int total_sec, int *hr, int *min, int *sec)
{
	*hr = total_sec/3600;
	total_sec = total_sec - 3600 * *hr;
	*min = total_sec/60;
	*sec = total_sec - 60 * *min;
}
