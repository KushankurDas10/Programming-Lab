#include<stdio.h>

int main(){
	int roll;
	printf("Enter the Roll: ");
	scanf("%d", &roll);
	
	if (roll == 100){
		printf("100 is present!");
		return 1;
	}
	
	if (roll != 100){
		printf("100 is not present!");
		return 0;
	}
}