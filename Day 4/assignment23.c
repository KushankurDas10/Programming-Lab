#include<stdio.h>

int main(){
	char y;
	printf("Enter char: ");
	scanf("%c", &y);
	if(y=='a' || y=='A' || y=='e' || y=='E' || y=='i'||y=='I'||y=='o'||y=='O'||y=='u'||y=='U'){
		printf("Vowel");
	}
	else{
		printf("Consonant");
		
	}
}