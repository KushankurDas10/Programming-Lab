#include<stdio.h>

int main()
{
	float l,b;
	printf("Enter length of rect: ");
	scanf("%f", &l);
	printf("Enter breadth of rect: ");
	scanf("%f", &b);
	printf("The area is %f and perimeter is %f", l*b, 2*(l+b));
	return 0;
	
}