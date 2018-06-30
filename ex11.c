#include<stdio.h>

int main(int argc, char *argv[])

{

	int numbers[4] = { 0 };
	char name[4] = {'a','a','a','a'};

	// first; print them out raw
	printf("numbers: %d %d %d %d\n",
			numbers[0], numbers[1], numbers[2], numbers[3]);
	
	printf("name each: %c %c %c %c\n",
			name[0], name[1], name[2], name[3]);

	printf("name: %s\n", name);

	//set up the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 'a';
	numbers[3] = 4; 

	//set up the name
	name[0] = 'J';
	name[1] = 'o';
	name[2] = 'h';
	name[3] = 'n';
	name[4] = 'n';
	name[5] = 'i';
	name[6] = 'e';
/*note above that an additional element can be added to the string array, even more than what was declared in the initalizer when the name character was defined above*/

	//print them out initialized
	printf("%d %d %d %d\n",
			numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("%c %c %c %c %c %c %c\n",
			name[0], name [1], name[2], name[3], name[4], name[5], name[6]);

	//print name like a string
	printf("%s\n", name);

	//another way to use name
	char *another = "Johnny";

	printf("%s\n", another);

	printf("another each: %c %c %c %c %c %c\n",
			another[0], another[1], another[2], another[3], another[4],
			another[5]);
	return 0;

}









