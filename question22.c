#include <stdio.h>

int a, rev, rem;

void main() {
	printf("Enter a positive int\n");
	scanf("%d", &a);

	printf("Before Reversal: %d\n", a);
	
	while (a > 0) {
		rem = a%10;
		rev = rev*10 + rem;
		a = a/10;
	}

	printf("After Reversal: %d\n", rev);
}
