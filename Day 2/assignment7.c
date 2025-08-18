#include<stdio.h>

int main()
{
	float r;
	printf("Enter the radius of the circle(in cm): ");
	scanf("%f", &r);
	printf("The Area of the circle with radius %f cm is %f cm^2: ", r, (3.14*r*r));
	
	return 0;
}