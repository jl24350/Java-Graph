#include <stdio.h>


int main(){

	char a = 'a';
	short b = 2;
	int c = 3;
	long d = 4;
	float e = 4;
	double f = 4;


	printf("The size of char is: %d\n", sizeof(a));
	printf("The size of short is: %d\n", sizeof(b));
	printf("The size of int is: %d\n", sizeof(c));
	printf("The size of long is: %d\n", sizeof(d));
	printf("The size of float is: %d\n", sizeof(e));
	printf("The size of double is: %d\n", sizeof(f));
	return 0;
}
