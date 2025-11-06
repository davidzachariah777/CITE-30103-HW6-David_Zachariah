#include <stdio.h>

char c;
int i;
long int li;
float f;
double d;

void main() {
	printf("The size of a char is %zu bytes\n", sizeof(c));
	printf("The size of an int is %zu bytes\n", sizeof(i));
      	printf("The size of a long int is %zu bytes\n", sizeof(li));
	printf("The size of a float is %zu bytes\n", sizeof(f));
 	printf("The size of a double is %zu bytes\n", sizeof(d));
}
