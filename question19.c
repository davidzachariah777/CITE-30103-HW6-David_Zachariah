#include <stdio.h>

int n, m, i = 0, sum = 0;

void main() {
	printf("How many numbers do you want to add?\n");
	scanf("%d",&n);

	while (i < n) {
		printf("Enter int (%d/%d)\n", i+1,n);
		scanf("%d",&m);
		sum += m;
		i++;
	}
	
	printf("Total sum is: %d\n", sum);
}
