//Area = pi*r^2
//Circumference = 2*pi*r

#include <stdio.h>
#define PI 3.14159;

const double pi = 3.14159;
int radius;
float area, circumference;

void main() {
	printf("Enter radius: ");
	scanf("%d",&radius);
	area = pi*radius*radius;
	circumference = 2*pi*radius;
	printf("The area and circumference of a circle with a radius of %d are %.2f and %.2f respectively\n", radius, area, circumference);
}
