#include <stdio.h>

int main(int argc, char const *argv[]){
	/* basic struct blueprint */
	struct Critter {
		/* data */
		char 	name[50];
		int 	id_num;
	};
	/* make new critter */
	struct Critter myCritterStruct = { .name = "john", .id_num = 0456 };

	/* output critter name */
	printf("%s\n", myCritterStruct.name);

	return 0;
}// end main
