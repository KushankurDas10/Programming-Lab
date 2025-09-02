#include<stdio.h>

int main(){
	int y;
	printf("Enter Year: ");
	scanf("%d", &y);
	if(y%400 == 0){
		printf("Leap year");
		
	}
	else if(y%100==0){
		printf("Leap year");
	}
	else if(y%4==0){
		printf("Leap year");
		
	}
	else{
		printf("not a leap year");
	}
}