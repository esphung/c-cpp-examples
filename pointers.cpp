#include "stdio.h"

int main() {
	int a;
	int *b; // pointer

	a = 5;
	b = &a;// address of a = &a

	printf("%i\n", *b);// value pointed to = *b

	return 0;
}
