#include <stdio.h>

int a;

void main() {
	printf("Enter an int\n");
	scanf("%d",&a);

	(a == 0) ? printf("Zero\n") : ((a > 0) ? printf("Positive\n") : printf("Negative\n"));
}
