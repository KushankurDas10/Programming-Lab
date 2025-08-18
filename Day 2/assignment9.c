#include<stdio.h>

int main()
{
	float a,b,c;
	printf("Enter the first number: ");
	scanf("%f", &a);
	printf("Enter the second number: ");
	scanf("%f", &b);
	printf("a is %f and b is %f\n", a,b);
	c=a;
	a=b;
	b=c;
	printf("After swapping a is %f and b is %f", a,b);
	return 0;
}