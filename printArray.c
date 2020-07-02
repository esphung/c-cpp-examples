#include <stdio.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
    	printf("%d ", arr[i]);
    	// printf("\n");
}

int main(int argc, char const *argv[])
{
	// create an array
	int num[4] = {100,1000,5000,10000};

	int n = ((sizeof(num)/(sizeof(int))));
	printf("%i\n", n);

	// pass array by ref
	printArray(num, n);

	/* finished execution */
	printf("\n");
	return 0;
}
