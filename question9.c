#include <stdio.h>

int a = 2, b = 3, c; 
float d;

void main() {
	c = (a+b)/2; //Integer Division
	d = (float)(a+b)/2; //Floating-Point Division
	printf("Integer Division: %d. Floating-Point Division: %.2f.\n", c,d);
}
