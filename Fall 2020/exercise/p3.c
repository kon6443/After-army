#include <stdio.h>

int main(int argc, char *argv[]) {

	char c= 'z';
	char *cp = &c;

	printf("cp is 0x%08x\n", cp);
	printf("The character at cp is %c\n", *cp);

	cp = cp + 1;
	printf("cp is 0x%08x\n", cp);



	return 0;
} 
