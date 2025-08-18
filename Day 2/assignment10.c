#include<stdio.h>

int main()
{
	float a,b;
	printf("Enter the first number: ");
	scanf("%f", &a);
	printf("Enter the second number: ");
	scanf("%f", &b);
	printf("a is %f and b is %f\n", a,b);
	a=a+b;
	b=a-b;
	a=a-b; 
	printf("After swapping a is %f and b is %f", a,b);
	return 0;
}