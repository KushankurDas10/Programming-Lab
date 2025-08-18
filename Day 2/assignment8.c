#include<stdio.h>

int main()
{
	printf("Enter the temperature in Celsius that you want in Fahrenheit: ");
	float c,f;
	scanf("%f", &c);
	printf("The conversion of %f Celsius in Fahrenheit is: %f\n", c, ((c*9/5) + 32));
	printf("Enter the temperature in Fahrenheit that you want in Celsius: ");
	scanf("%f", &f);
	printf("The conversion of %f Fahrenheit in celsius is: %f\n", f, (f-32)*5/9);
	return 0;
}