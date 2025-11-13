#include <stdio.h>

int a;

void main() {
	printf("Enter an int\n");
	scanf("%d", &a);

	if ((a%2 == 0) && (a%3 == 0) && (a%7 != 0)) {
		printf("Requirements are met!\n");
	} else {
		printf("Requirements are not met.\n");
	}
}
