#include <stdio.h>

int l, r;

void main() {
	printf("Enter value for 'L'\n");
	scanf("%d", &l);
	printf("Enter value for 'R'\n");
	scanf("%d", &r);

	printf("Table of %d\n", l);
	for (int i = 1; i <= r; i++) {
		printf("%d x %d = %d\n", l,i,l*i);
	}
}
