#include <stdio.h>

int a,b;
char c;

void main() {
	printf("Enter an int (1/2)\n");
	scanf("%d", &a);

	printf("Enter an int (2/2\n");
	scanf("%d", &b);

	printf("Enter an arithmetic (+, -, *, /)\n");
	scanf("%s", &c);

	switch (c) {
		case '+': 
			printf("%d\n", a+b);
			break;
		case '-':
			printf("%d\n", a-b);
			break;
		case '*': 
			printf("%d\n", a*b);
			break;
		case '/':
			if (b == 0) {
				printf("Undefined - Dividing by zero\n");
			} else {
				printf("%d\n", a/b);
			}
			break;
	}
}
