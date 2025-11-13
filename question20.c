#include <stdio.h>

int n, count = 0;

void main() {
	do {
		printf("Enter an int\n");
		scanf("%d", &n);
		count++;
	} while (n != 0);
	
	printf("%d ints were entered\n", count-1);

}
