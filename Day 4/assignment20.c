#include<stdio.h>
#include<math.h>
int main(){
	float a;
	printf("Enter number: ");
	scanf("%f",&a);
	if(fmod(a,1.0) == 0.0 && a>=0){
		printf("Whole number");
	}
	else{
		printf("Not an Whole number");
	}
}