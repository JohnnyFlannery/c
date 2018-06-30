#include<stdio.h>
#include<ctype.h>

/*int main(int argc, char *argv[]) {
	int ey = '4';
	printf("%c\n", toupper(ey));

	return 0;
}
*/

int main(int argc, char *argv[]) 
{
	if (argc != 2) {
		printf("you need provide one an only one argument, bruh\n");
		return 1;
	}	
	int i =0;
	for(i = 0; argv[1][i] != '\0'; i++) {
		char letter = argv[1][i];
		switch (letter) {
			case 'a':
				printf("%c\n", toupper(letter));
				break;
			case 'b':
				printf("%c\n", toupper(argv[1][i]));
				//note that using 'letter' and 'argv[1][i]' are same.
				break;
			case 'c':
				printf("i dont feel like making %c capital\n", letter);
				break;
			default:
				printf("%c doesn't matter to me\n", letter);
		}
	}
	return 0;
}


