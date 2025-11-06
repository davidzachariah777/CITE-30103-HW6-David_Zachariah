#include <stdio.h>

int global = 10;

void main () {
	int local = 20;
	printf("Local variable: %d\n", local);
	printf("Global variable: %d\n", global);
}
