#include <stdio.h> 

int a,b;

void main(){
	printf("Enter an int (1/2)\n");
	scanf("%d",&a);
	printf("Enter an int (2/2)\n");
	scanf("%d", &b);

	printf("Addition: %d\n", a+b);
	printf("Subtraction: %d\n", a-b);
	printf("Multiplication: %d\n", a*b);
	printf("Division: %d\n", a/b);
	printf("Remainder: %d\n", a%b);
}
