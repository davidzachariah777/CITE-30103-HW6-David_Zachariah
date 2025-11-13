#include <stdio.h> 

int a;

void main() {
	printf("Enter an int\n");
	scanf("%d", &a);

	if (a > 0) 
	{
		printf("Positive\n");
	} else if (a < 0) {
		printf("Negative\n");
	} else {
		printf("Zero\n");
	}
}
