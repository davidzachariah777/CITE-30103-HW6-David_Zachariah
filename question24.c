#include <stdio.h>

int count = 0;

void main() {
	for (int i = 1; i <= 50; i++) {
		if (i > 40)
			break;
		if (i%5 == 0)
			continue;
		printf("%d\n",i);
		count++;
	}

	printf("%d numbers were displayed\n", count);
}
