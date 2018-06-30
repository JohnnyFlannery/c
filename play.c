/*#include<stdio.h>

void main()>

 char name[]="siva";
 printf("name = %p\n", name);
 printf("&name[0] = %p\n", &name[0]);
 printf("name printed as %%s is %s\n",name);
 printf("*name = %c\n",*name);
 printf("name[1] = %c\n", name[1]);
} */

#include<stdio.h>

int main(int argc, char **argv) {
	char array[] = "fuck you I work";
	printf("%s\n", array);
	printf("%c\n", array[0,3]);
}

