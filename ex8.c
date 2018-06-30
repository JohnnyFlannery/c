#include<stdio.h>

int main(int argc, char *argv[])
{
	int i = 1;

	if (argc == 1) {
		printf("You no arguments, you suck!\n");
	} else if (argc >= 2 && argc <= 4) {
		printf("Here are your arguments:\n");

		for (i=1; i < argc; i++) {
			printf("%s\n", argv[i]);
		}
		printf("\n");
	} else {
		printf("You have too many arguments, you suck!\n");
	}
	
	return 0;
}

//this code is modified from original 
