#include<stdio.h>
#include<math.h>

int main()
{
	float p,n;
	printf("Enter a pos no. : ");
	scanf("%f",&p);
	printf("Enter a neg no.(use sign) : ");
	scanf("%f",&n);
	printf("The floor and ceil of pos no. is %f & %f respectively\n", floor(p), ceil(p));
	printf("The floor and ceil of neg no. is %f & %f respectively", floor(n), ceil(n));
	return 0;
}