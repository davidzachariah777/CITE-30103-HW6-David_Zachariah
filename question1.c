//Documentation Section
/*Calculates area and perimeter of a rectangle
  given dimensions from user input*/

//Link Section
#include <stdio.h>

//Global Declaration Section
int length, width, area, perimeter;

//Main Program Section
int main() {
	printf("Enter rectangle length (int): \n");
	scanf("%d", &length);
	printf("Enter rectangle width (int): \n");
	scanf("%d", &width);

	area = length*width;
	perimeter = length*2 + width*2;

	printf("The area of the rectangle is %d units\n", area);
	printf("The perimeter of the rectangle is %d units\n", perimeter);
}
