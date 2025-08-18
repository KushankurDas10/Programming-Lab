#include<stdio.h>

int main()
{
	printf("Enter your principle amount: ");
	float p,r,t;
	scanf("%f", &p);
	printf("Enter your rate of interest per annum: ");
	scanf("%f", &r);
	printf("Enter your Time period: ");
	scanf("%f", &t);
	float si = (p*r*t)/100;
	printf("Your final simple interest will be %f\n", si);
	return 0;
	 
}