#include <stdio.h>

int a;

void main() {
	printf("Enter grade\n");
	scanf("%d",&a);

	if (a >= 90) {
		printf("A\n");
	} else if (a >= 80) {
		printf("B\n");
	} else if (a >= 70) {
		printf("C\n");
	} else if (a >= 60) {
		printf("D\n");
	} else {
		printf("F\n");
	}
}
