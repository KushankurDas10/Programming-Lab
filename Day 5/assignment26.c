#include<stdio.h>

int main(){
	
	float a,b;
	char o;
	printf("Enter the numbers: ");
	scanf("%f %f", &a,&b);
	printf("Enter the operator: ");
	scanf(" %c",&o);
	
	switch(o){
		case '+':
			printf("%f",a+b);
			break;
		case '-':
			printf("%f",a-b);
			break;
		case '/':
			printf("%f",a/b);
			break;
		case '*':
			printf("%f",a*b);
			break;
		default: 
			printf("Wrong input");
			break;
	
	}

}