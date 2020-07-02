#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	// random generator seed
	srand(time(NULL));// should only be called once

	int k;

	k = (rand() % 200);

	printf("%i\n", k);
	return 0;
}
