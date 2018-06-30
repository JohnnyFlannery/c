#include<stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2){
		printf("You need to provide one argument, man!\n");
		return 1;
		//returning '0' and '1' do same thing but 1 if for errors (broadstroke)
	}

	int i = 0;
	for(i = 0; argv[1][i] != '\0'; i++){
		char letter = argv[1][i];
		
		switch (letter) {
			case 'a':
			case 'A':
				printf("%d: 'A' and its ASCII decimal is: '%d'\n", i, argv[1][i]);
				break;

			case 'e':
			case 'E':
				printf("%d: 'E' and its ASCII decimal is: '%d'\n", i, argv[1][i]);
				break;

			case 'i':
			case 'I':
				printf("%d: 'I' and its ASCII decimal is: '%d'\n", i, argv[1][i]);
			break;

			case 'o':
			case 'O':
				printf("%d: 'O' and its ASCII decimal is: '%d'\n", i, argv[1][i]);
			break;

			case 'u':
			case 'U':
				printf("%d: 'U' and its ASCII decimal is: '%d'\n", i, argv[1][i]);			
			break;
		
			case 'y':
			case 'Y':
				if (i > 2) {
				// it's only sometimes Y
				printf("%d: 'Y' and its ASCII decimal is: '%d'\n", i, argv[1][i]);
				}	
			break;
				
			default:
				printf("%d: '%c' is not a vowel and its ASCII decimal is: '%d'\n", i, letter, argv[1][i]);
		}
	}	

	return 0;

}
