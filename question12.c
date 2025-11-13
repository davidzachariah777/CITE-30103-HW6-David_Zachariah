#include <stdio.h>

int a = 5, b = 3, res;

void main() {
	res = a + (b << 1);
	printf("Change parenthesis: %d\n", res);

	res = a + b * 2;
	printf("Change arithmetic: %d\n", res);
}
