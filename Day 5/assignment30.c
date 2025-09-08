#include<stdio.h>

int main(){
	int marks,cat;
	printf("Enter Marks: ");
	scanf("%d", &marks);
	if(marks<=70){
		cat = 1;
	}
	else if(marks>70&&marks<=79){
		cat=2;
	}
	else if(marks>=80&&marks<=89){
		cat=3;
	}
	else if(marks>=90&&marks<=94){
		cat=4;
	}else{
		cat=5;
	}
	switch(cat){
		case 1:
			printf("Grade F");
			break;
		case 2:
			printf("Grade C");
			break;
		case 3:
			printf("Grade B");
			break;
		case 4:
			printf("Grade A");
			break;
		case 5:
			printf("Grade A+");
			break;
		default:
			printf("invalid Marks");
			break;
	}
}