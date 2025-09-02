#include<stdio.h>

int main(){
	
	char t;
	printf("Call the toss: ");
	scanf("%c",&t);
	if(t=='h' || t=='H'){
		printf("its Heads");
	}
	else if(t=='t'||t=='T'){
		printf("its tails");
		
	}
	else{
		printf("Wrong call");
	}
}