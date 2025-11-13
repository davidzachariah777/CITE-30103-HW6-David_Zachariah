#include <stdio.h>

int a,b,c,d,e;

void main() {
	printf("Enter mark 1/5\n");
	scanf("%d", &a);
	printf("Enter mark 2/5\n");
        scanf("%d", &b);
        printf("Enter mark 3/5\n");
        scanf("%d", &c);
        printf("Enter mark 4/5\n");
        scanf("%d", &d);
        printf("Enter mark 5/5\n");
        scanf("%d", &e);

	if ((a >= 40) && (b >= 40) && (c >= 40) && (d >= 40) && (e >= 40)) {
		printf("PASS\n");
	} else {
		printf("FAIL\n");
	}
}
