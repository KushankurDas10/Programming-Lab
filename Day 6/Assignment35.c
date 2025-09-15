#include<stdio.h>
int main(){
	int s,e;
	printf("Enter starting number: ");
	scanf("%d",&s);
	printf("Enter ending number: ");
	scanf("%d",&e);
	
	for(int i=s;i<=e;i++){
		if (i==1||i==0){
			continue;
		}
		int isPrime = 1;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				isPrime=0;
				break;
			}
		}
		if (isPrime){
			printf("%d\n",i);
		}
	}
}