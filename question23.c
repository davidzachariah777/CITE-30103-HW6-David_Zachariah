#include <stdio.h>

int n, positive = 0, negative = 0, even = 0, odd = 0;

void main() {
	do {
		printf("Enter an int\n");
		scanf("%d", &n);

		if (n > 0)
			positive++;
		if (n < 0)
			negative++;
		if (n%2 == 0)
			even++;
		if ((n%2 == 1) || (n%2 == -1))
			odd++;

	} while (n != 0);

	printf("# of positive values: %d\n", positive);
	printf("# of negative values: %d\n", negative);
	printf("# of even values: %d\n", even-1);
	printf("# of odd values: %d\n", odd);

}
