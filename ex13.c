#include <stdio.h>

int main(int argc, char *argv[])
{
	int i=0;

	// go through each string in argv
	//why am i skipping argv[0]?
	for (i=1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	//let's make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Illinois"
	};

	int num_states = 4;
	
	printf("mmmk states0 is: %s\n", states[0]);
	printf("oook argv1 is: %s\n", argv[1]);
	argv[1] = states[0];
	printf("argv1 is now: %s\n", argv[1]);
	printf("states0 is still: %s\n", states[0]);

	for (i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
	
	}
	return 0;
}
