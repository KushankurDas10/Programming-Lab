#include<stdio.h>
#include<math.h>

int main()
{
	float p,r,t,a;
	printf("Enter your principal: ");
	scanf("%f", &p);
	printf("Enter your rate of interest: ");
	scanf("%f", &r);
	printf("Enter your time: ");
	scanf("%f", &t);
	a = p*pow((1+r/100), t);
	printf("your CI annually is: %f", a-p);
	return 0;

	
}