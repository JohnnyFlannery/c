#include<stdio.h>

int main(int argc, char *argv[])

{
	int areas[] = {10, 20, 30, 40, 50};
	char name[] = "Johnny";
	char full_name[] = {
		'J', 'o', 'h', 'n', 'n', 'y',
		' ', 'F', 'l', 'a', 'n', 'n', 'e', 'r', 'y', '\0'
		};
	char *states[] = {
		"first", "second"};

printf("The size of an int: %ld\n", sizeof(int));
printf("The size of areas (int[]): %ld\n", sizeof(areas));
printf("The first area is %d\n", areas[10]);
/*notice above that if array is indexed outside of defined, C will just give it a 0*/
printf("The size of char: %ld\n", sizeof(char));
printf("The size of name (char[]): %ld\n", sizeof(name));
printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
printf("name=%s and full_name=\"%s\"\n", name, full_name);
/*notice above that a \ before a " will allow the " to be printed and not considered close of string*/
printf("first state: %s\n", states[0WW]);
return 0;

}
