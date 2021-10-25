//Area and circumference of a circle
#include<stdio.h>
int main()
{
	float radius, area, circumference;
	printf("Enter the Value of Radius: ");
	scanf_s("%f", & radius);
	area = 3.1416 * radius * radius;
	circumference = 2 * 3.1416 * radius;
	printf("Area of the Circle is %f", area);
	printf("\ncircumference of the Circle is %f \n", circumference);
	return 0;
}